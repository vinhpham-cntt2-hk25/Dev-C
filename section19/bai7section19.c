#include <stdio.h>

int sumArray(int *arr, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *(arr + i);   
    }

    return sum;
}

int main() {
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];  

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Tong cua mang la: %d\n", sumArray(arr, n));

    return 0;
}
