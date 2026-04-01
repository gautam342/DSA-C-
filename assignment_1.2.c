#include <stdio.h>

int findPeak(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
            return i;
    }
    return -1; 
}


void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }
}


void sortMountain(int arr[], int n) {
    int peak = findPeak(arr, n);
    reverse(arr, 0, peak);           
    reverse(arr, peak + 1, n - 1);   
    reverse(arr, 0, n - 1);         
}

int main() {
    int arr[] = {1, 3, 5, 7, 6, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = findPeak(arr, n);
    printf("Peak index: %d\n", peak);

    sortMountain(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}


