#include <stdio.h>

int findMax(int *arr, int n) {
    int i;
    int max = arr[0];    

    for (i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int n, i;
    int arr[100];  

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int maxValue = findMax(arr, n);

    printf("Phan tu lon nhat trong mang la: %d\n", maxValue);

    return 0;
}
