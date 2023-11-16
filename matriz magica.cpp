#include <stdio.h>

int main() {
    int matriz[3][3];

    printf("Ingrese los elementos de la matriz 3x3:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Posicion (%d,%d): ", i, j);
            while (scanf("%d", &matriz[i][j]) != 1) {
                printf("Ingrese un valor entero válido: ");
                while (getchar() != '\n');
            }
        }
    }

    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    int sumaFila = 0;
    for (int j = 0; j < 3; ++j) {
        sumaFila += matriz[0][j];
    }

    for (int i = 1; i < 3; ++i) {
        int sumaFilaActual = 0;
        for (int j = 0; j < 3; ++j) {
            sumaFilaActual += matriz[i][j];
        }
        if (sumaFilaActual != sumaFila) {
            printf("\nLa matriz no es magica.\n");
            return 0;
        }
    }

    for (int j = 0; j < 3; ++j) {
        int sumaColumna = 0;
        for (int i = 0; i < 3; ++i) {
            sumaColumna += matriz[i][j];
        }
        if (sumaColumna != sumaFila) {
            printf("\nLa matriz no es magica.\n");
            return 0;
        }
    }

    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < 3; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
    }
    if (sumaDiagonalPrincipal != sumaFila) {
        printf("\nLa matriz no es magica.\n");
        return 0;
    }

    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < 3; ++i) {
        sumaDiagonalSecundaria += matriz[i][2 - i];
    }

    if (sumaDiagonalSecundaria == sumaFila) {
        printf("\nLa matriz es magica.\n");
    } else {
        printf("\nLa matriz no es magica.\n");
    }

    return 0;
}

