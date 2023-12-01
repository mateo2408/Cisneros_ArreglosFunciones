//Mateo Cinseros
//Actualize el ejercicio de suma de matrices, utilizando el concepto de Funciones.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Definimos funcion
int suma(int a, int b)
{
    return a+b;
}

int main()
{
    //Definimos el numero de filas y columnas
    int filas;
    int columnas;
    printf("Ingrese la cantidad de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese la cantidad de columnas de las matrices: ");
    scanf("%d", &columnas);

    //Definir matrices
    int A[filas][columnas];
    int B[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            A[i][j]=rand()%100;
            B[i][j]=rand()%100;
        }
    }
    //Imprimimos las matrices
    printf("Matriz A:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\t\n");
    }
    printf("\n");

    printf("Matriz B:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    //Realizamos la suma y la imprimimos
            printf("Suma de Matriz C: \n");
            for (int i = 0; i < filas; i++)
            {
                for (int j = 0; j < columnas; j++)
                {
                    printf("%d\t", suma(A[i][j], B[i][j]));
                }
                printf("\n");
            }
            printf("\n");
    return 0;
}
