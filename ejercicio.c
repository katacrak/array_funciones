#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializaTablero(int m[8][8]);
void rellenarTablero(int m[8][8]);
void pintarTablero(int m[8][8]);

int main() {
    int tablero[8][8];
    char continuar;

    srand(time(NULL));

    do {
        inicializaTablero(tablero);

        rellenarTablero(tablero);

        pintarTablero(tablero);

        printf("\nDesea repetir el programa? s/n: ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}

void inicializaTablero(int m[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            m[i][j] = 0;
        }
    }
}

void rellenarTablero(int m[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            m[i][j] = rand() % 9 + 1;
        }
    }
}

void pintarTablero(int m[8][8]) {
    printf("\nTablero:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
