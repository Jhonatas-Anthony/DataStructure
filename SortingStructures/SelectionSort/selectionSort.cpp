#include <iostream>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int menorValor = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[menorValor]) {
                menorValor = j;
            }
        }
        std::swap(arr[i], arr[menorValor]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    std::cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
