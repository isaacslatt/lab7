#include <stdio.h>


void bubbleSort(int arr[], int n, int *swapCount) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

              
                (*swapCount)++;
            }
        }
    }
}


void printSwaps(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int swapCount = 0;

        for (int j = 0; j < n - 1; j++) {
            for (int k = 0; k < n - j - 1; k++) {
               
                if (arr[k] > arr[k + 1]) {
                    int temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;

                   
                    swapCount++;
                }
            }
        }

        printf("%d: # of times %d is swapped\n", arr[i], swapCount);
    }
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    printf("array1:\n");
    printSwaps(array1, n1);

    printf("\narray2:\n");
    printSwaps(array2, n2);

    return 0;
}
