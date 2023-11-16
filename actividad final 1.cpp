#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 5
#define COLUMNAS 7

int main() 
{
    int matriz[FILAS][COLUMNAS];
    srand(time(NULL));

    for (int i = 0; i < FILAS; ++i) 
	{
        for (int j = 0; j < COLUMNAS; ++j) 
		{
            matriz[i][j] = rand() % 10;
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < FILAS; ++i) 
	{
        for (int j = 0; j < COLUMNAS; ++j) 
		{
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("--------------------------------------\n");

    int sumaDiagonal = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        sumaDiagonal += matriz[i][i];
    }
    printf("Suma de la diagonal: %d\n", sumaDiagonal);

    int sumaPrimeraFila = 0;
    for (int j = 0; j < COLUMNAS; ++j) 
	{
        sumaPrimeraFila += matriz[0][j];
    }
    printf("Suma de la fila 1: %d\n", sumaPrimeraFila);

    int sumaUltimaColumna = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        sumaUltimaColumna += matriz[i][COLUMNAS - 1];
    }
    printf("Suma de la columna 7: %d\n", sumaUltimaColumna);

    printf("--------------------------------------\n");

    int sumaFila2 = 0;
    for (int j = 0; j < COLUMNAS; ++j) 
	{
        sumaFila2 += matriz[1][j];
    }
    printf("Suma de la fila 3: %d\n", sumaFila2);

    int sumaFila4 = 0;
    for (int j = 0; j < COLUMNAS; ++j) 
	{
        sumaFila4 += matriz[3][j];
    }
    printf("Suma de la fila 5: %d\n", sumaFila4);

    int sumaFila6 = 0;
    for (int j = 0; j < COLUMNAS; ++j) 
	{
        sumaFila6 += matriz[4][j];
    }
    printf("Suma de las filas pares: %d\n", sumaFila6);

    printf("----------------------------------------\n");

    int sumaColumna2 = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        sumaColumna2 += matriz[i][1];
    }
    printf("Suma de la columna 2: %d\n", sumaColumna2);

    int sumaColumna4 = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        sumaColumna4 += matriz[i][3];
    }
    printf("Suma de la columna 4: %d\n", sumaColumna4);

    int sumaColumna6 = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        sumaColumna6 += matriz[i][5];
    }
    printf("Suma de la columna 6: %d\n", sumaColumna6);

    int sumaColumnasImpares = sumaColumna2 + sumaColumna4 + sumaColumna6;
    printf("Suma de las columnas impares: %d\n", sumaColumnasImpares);

    printf("-----------------------------------------\n");

    int sumaDiagonalInvertida = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        sumaDiagonalInvertida += matriz[i][COLUMNAS - 1 - i];
    }
    printf("Suma de la diagonal: %d\n", sumaDiagonalInvertida);

    int sumaTriangularSuperior = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        for (int j = i; j < COLUMNAS; ++j) 
		{
            sumaTriangularSuperior += matriz[i][j];
        }
    }
    printf("Suma de la triangular superior: %d\n", sumaTriangularSuperior);

    printf("-----------------------------------------\n");

    int sumaDiagonal2 = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        sumaDiagonal2 += matriz[i][i];
    }
    printf("Suma de la diagonal: %d\n", sumaDiagonal2);

    int sumaTriangularInferior = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        for (int j = 0; j <= i; ++j) 
		{
            sumaTriangularInferior += matriz[i][j];
        }
    }
    printf("Suma de la triangular inferior: %d\n", sumaTriangularInferior);

    return 0;
}

