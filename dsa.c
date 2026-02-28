#include <stdio.h>

int findMissing(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2; 
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Missing number: %d\n", findMissing(arr, n));
    return 0;
}





// #include <stdio.h>

// // Find the peak element's index
// int findPeak(int arr[], int n) {
//     for (int i = 1; i < n - 1; i++) {
//         if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
//             return i;
//     }
//     return -1; // invalid mountain
// }

// // Reverse a subarray in-place
// void reverse(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++; end--;
//     }
// }

// // Sort mountain array in increasing order (in-place)
// void sortMountain(int arr[], int n) {
//     int peak = findPeak(arr, n);
//     reverse(arr, 0, peak);           // reverse increasing part
//     reverse(arr, peak + 1, n - 1);   // reverse decreasing part
//     reverse(arr, 0, n - 1);          // reverse whole array
// }

// int main() {
//     int arr[] = {1, 3, 5, 7, 6, 4, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int peak = findPeak(arr, n);
//     printf("Peak index: %d\n", peak);

//     sortMountain(arr, n);
//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
//     return 0;
// }


