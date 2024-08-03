#include <stdio.h>

void printArray(int arr[], int n);
void selectionSort(int arr[], int n);

int main (int argc, char * argv)
{
    int arr[10] = {2, 4, 9, 1, 23, 8, 3, 22, 18, 10};
    int n = 10;

    printf("Unordered array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Ordered array: ");
    printArray(arr, n);

    return 0;
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    for(int i = 0;i < n - 1;i++)
    {
        int min_idx = i;
        for(int j = i + 1;j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
