#include <iostream>

void quickSort(int arr[], int left, int right)
{
    if (left >= right) {
        return;
    }

    int pivot = arr[(left + right) / 2];
    int low = left;
    int hight = right;
    while (low <= hight) {
        while (arr[low] < pivot) {
            low++;
        }
        while (arr[hight] > pivot) {
            hight--;
        }
        if (low <= hight) {
            std::swap(arr[low], arr[hight]);
            low++;
            hight--;
        }
    }

    quickSort(arr, left, hight);
    quickSort(arr, low, right);
}

int main()
{
    int arr[] =  {80, 13, 31, 57, 8, 25, 58, 44, 29, 83, 43, 24, 10, 99, 60, 6, 48, 1, 35, 53, 66, 19, 89, 51, 18, 71, 97, 54, 7, 90, 42, 15, 38, 68, 73, 76, 12, 49};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);


    std::cout << "Array ordenado: " << "{ ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "}" << std::endl;
}