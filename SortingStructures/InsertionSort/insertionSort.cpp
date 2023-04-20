#include <iostream>

void insertionSort(int arr[], int length){
    for ( int i = 1 ; i < length ; i ++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && temp <= arr[j])  
        {  
            std::swap(arr[j+1], arr[j]);
            j = j - 1;  
        }  
        arr[j+1] = temp;
    }
    for ( int k = 0 ; k < length ; k++){
        std::cout << arr[k] << " ";
    }
    std::cout << std::endl;
}

int main(){
    int length = 15;
    int array[] = { 8, 7, 2, 6, 1, 9, 5, 3, 4, 0, 15, 14, 13, 12, 11 };
    insertionSort(array, length);
    return 0;
}