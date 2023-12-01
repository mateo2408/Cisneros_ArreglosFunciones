//Mateo Cisneros
//Actualice el ejercicio de matriz tridimensional, utilizando el concepto de Funciones.

#include<stdio.h>
//Definimos los 1 y 0 como funciones
int uno(int a)
{
    a = 1;
    return a;
}
int cero(int b)
{
    b = 0;
    return b;
}

int main()
{
    int a;
    int b;
    //Se pide el tamaño de las matrices
    int capas;
    int filas;
    int columnas;
    printf("Ingrese el número de matrices: ");
    scanf("%d", &capas);
    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    //Definimos la matriz
    int arreglo[capas][filas][columnas];

    //Se establecen la ultima matriz en uno
    for (int k = 0; k < capas; k++)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                arreglo[k][i][j]=uno(a);
            }   
        }
    }

    //Inicializamos las matrices en o
    for (int k = 0; k < capas; k++)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                arreglo[k-1][i][j]=cero(b);
            }   
        } 
    }

    //Imprimimos las matrices
    for (int k = 0; k < capas; k++)
    {
        printf("Matriz %d\n", k);
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {   
                printf("%d", arreglo[k][i][j]);
            } 
            printf("\n"); 
        }
    }
    return 0;
}
