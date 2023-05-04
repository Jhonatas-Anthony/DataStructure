#include <iostream>

// Poderia usar o std::swap, função padrão que o c++ possui para trocar o endereço de um com o endereço de outro, basicamente, o algoritmo de baixo imita a função do std::swap.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]); 
        }
    }
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int positionPivo = partition(arr, low, high);
        quickSort(arr, low, positionPivo - 1);
        quickSort(arr, positionPivo + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    std::cout << "Matriz ordenada: ";
    printArray(arr, n);
    return 0;
}
