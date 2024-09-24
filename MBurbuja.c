#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Intercambiar arr[j] y arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[60];
    int n = sizeof(arr) / sizeof(arr[0]);

    // Inicializar la semilla para la generación de números aleatorios
    srand(time(0));

    // Generar 60 números aleatorios
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;  // Números aleatorios entre 0 y 99
    }

    // Imprimir el arreglo desordenado
    printf("Numeros desordenados a Aleatorios: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    getch();

    // Ordenar el arreglo
    bubbleSort(arr, n);

    // Imprimir el arreglo ordenado
    printf("Numeros ordenados a Aleatorios: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}