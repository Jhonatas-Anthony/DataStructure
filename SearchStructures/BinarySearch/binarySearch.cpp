#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}




int binarySearch(int arr[], int n, int valor) {
   int left = 0, right = n;
   std::cout << "Existem " << n << " valores dentro desse array" << std::endl;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == valor) {
            return mid;
        } else if (arr[mid] < valor) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        
        std::cout << "Posição " << mid << " verificada" << std::endl;
    }
    return -1;
}


int main() {
    int arr[] = {5, 2, 7, 3, 1, 9, 11, 4, 8, 0, 173, 5, 6, 65, 4, 12, 3, 61, 12, 111}; // array desordenado
    int n = 20;

    bubbleSort(arr, n);

     std::cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
     std::cout <<  std::endl;

    int valorProcurado;
    std::cout << "procurar o valor:";
    std::cin >> valorProcurado; 
    int index = binarySearch(arr, n, valorProcurado);

    if (index == -1) {
         std::cout << "Valor " << valorProcurado << " não encontrado." <<  std::endl;
    } else {
         std::cout << "Valor " << valorProcurado << " encontrado na " << index + 1 << "º posição" << "." <<  std::endl;
    }

    return 0;
}
