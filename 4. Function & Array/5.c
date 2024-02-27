/*
WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int size, int order) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if ((order == 1 && arr[j] > arr[j + 1]) || (order == 2 && arr[j] < arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[100], arr2[100];
    int size1, size2;
    int order;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements for the first array: ", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements for the second array: ", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &order);

    bubbleSort(arr1, size1, order);

    bubbleSort(arr2, size2, order);

    printf("\nSorted first array: ");
    printArray(arr1, size1);
    printf("Sorted second array: ");
    printArray(arr2, size2);

    return 0;
}
