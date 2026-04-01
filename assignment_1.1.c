#include <stdio.h>

int main() {
    int n, i, j, found;
    
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n-1];

    printf("Enter %d elements:\n", n-1);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i <= n; i++) {
        found = 0;

        for(j = 0; j < n-1; j++) {
            if(arr[j] == i) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            printf("Missing number = %d", i);
            break;
        }
    }

    return 0;
}