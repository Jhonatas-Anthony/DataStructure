#include <iostream>

void shellSort(int arr[], int n){
    int pivot = n / 2; 
    std::cout << "array:" << std::endl;
    for (int i = 0; i < n; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "array + pivot:" << std::endl;
    for (int i = 0; i < n - pivot; i++) 
    {
        for(int j = 0; j < n; j++)
        std::cout << arr[i]<< " " << "+" << " " << arr[i + pivot] << " ";
    }
    std::cout << std::endl;


    //std::cout << pivot << std::endl;


}

int main() {
    int array[] =  {80, 13, 31, 57, 8, 25, 58, 44, 29, 83, 43, 24, 10, 99, 60, 6, 48};
    int n = sizeof(array) / sizeof(array[0]);
    //std::cout << n << std::endl;
    shellSort(array, n);
    return 0;
}