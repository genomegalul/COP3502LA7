#include <stdio.h>
#define SIZE 9

//Bubble sort function.
void bubbleSort(int arr[], int n, int swaps[]) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps[i]++;
            }
        }
    }
}

int main() 
{
    //Given array.
    int arr[SIZE] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
    int n = SIZE;

    //Initializing the swaps array with 0's.
    int swaps[SIZE] = { 0 };

    //Calling the bubble sort function.
    bubbleSort(arr, n, swaps);

    //Printing the number of swaps at each index.
    printf("Index\tNumber of Swaps\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", i, swaps[i]);
    }

    return 0;
}


