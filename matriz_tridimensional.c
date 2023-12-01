//Mateo Cisneros
//Actualice el ejercicio de matriz tridimensional, utilizando el concepto de Funciones.

#include<stdio.h>
//Definimos los 1 y 0 como funciones
int uno(int)
{
    return 1;
}
int cero(int)
{
    return 0;
}

int main()
{
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
                arreglo[k][i][j]=uno;
            }   
        }
    }


    return 0;
}
