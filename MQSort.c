#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main() {
    int arr[60];
    int n = sizeof(arr) / sizeof(arr[0]);

    srand(time(0));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Números aleatorios entre 0 y 99
    }

    printf("Numeros desordenados a Aleatorios: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    getch();

    quickSort(arr, 0, n - 1);

    printf("Numeros ordenados a Aleatorios: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}