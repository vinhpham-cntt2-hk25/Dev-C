#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int i, j, k = 0;
    int temp[100];
    for (i = 0; i < n; i++) {
        int duplicate = 0;

        for (j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                duplicate = 1; 
                break;
            }
        }

        if (!duplicate) {
            temp[k] = arr[i];
            k++;
        }
    }

    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    return k; 
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newSize, i;

    printf("Mang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    newSize = removeDuplicates(arr, n);

    printf("\nMang sau khi loai bo trung lap: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nKich thuoc mang moi: %d\n", newSize);

    return 0;
}
