#include <stdio.h>

int timMax(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 7, 2, 9, 5, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = timMax(arr, size);
    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}
