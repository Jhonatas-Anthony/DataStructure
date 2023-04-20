#include <iostream>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int array[] = {5, 2, 7, 3, 1, 9, 11, 4, 8, 0, 173, 5, 6, 65, 4, 12, 3, 61, 12, 111}; // array desordenado
    int length = 20;
    bubbleSort(array, length);
    std::cout << "Array ordenado: ";
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}