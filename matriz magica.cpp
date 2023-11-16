#include <stdio.h>

int main() 
{
    int repetir;

    do 
    {
        int matriz[3][3];

        printf("Ingrese los elementos de la matriz 3x3:\n");
        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                printf("Posicion (%d,%d): ", i, j);
                while (scanf("%d", &matriz[i][j]) != 1) 
                {
                    printf("Ingrese un valor entero valido: ");
                    while (getchar() != '\n');
                }
            }
        }

        printf("\nMatriz ingresada:\n");
        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        int sumaFila = 0;
        for (int j = 0; j < 3; ++j) 
        {
            sumaFila += matriz[0][j];
        }

        printf("\nSuma de la fila 1: %d\n", sumaFila);

        for (int i = 1; i < 3; ++i) 
        {
            int sumaFilaActual = 0;
            for (int j = 0; j < 3; ++j) 
            {
                sumaFilaActual += matriz[i][j];
            }
            printf("Suma de la fila %d: %d\n", i + 1, sumaFilaActual);
        }

        for (int j = 0; j < 3; ++j) 
        {
            int sumaColumna = 0;
            for (int i = 0; i < 3; ++i) 
            {
                sumaColumna += matriz[i][j];
            }
            printf("Suma de la columna %d: %d\n", j + 1, sumaColumna);
        }

        int sumaDiagonalPrincipal = 0;
        for (int i = 0; i < 3; ++i) 
        {
            sumaDiagonalPrincipal += matriz[i][i];
        }
        printf("\nSuma de la diagonal: %d\n", sumaDiagonalPrincipal);

        int sumaDiagonalSecundaria = 0;
        for (int i = 0; i < 3; ++i) 
        {
            sumaDiagonalSecundaria += matriz[i][2 - i];
        }
        printf("Suma de la diagonal secundaria: %d\n", sumaDiagonalSecundaria);

        if (sumaFila == sumaDiagonalPrincipal && sumaDiagonalPrincipal == sumaDiagonalSecundaria) 
        {
            printf("\nLa matriz es magica.\n");
        } 
        else 
        {
            printf("\nLa matriz no es magica.\n");
        }

        printf("\n¿Desea repetir el programa? (1: Si, 0: No): ");
        scanf("%d", &repetir);

    } while (repetir == 1);

    return 0;
}
