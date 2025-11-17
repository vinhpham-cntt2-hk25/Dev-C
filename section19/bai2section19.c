#include <stdio.h>

// Hàm d?m s? ph?n t? ch?n và l?
void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0; // kh?i t?o bi?n ch?n
    *odd = 0;  // kh?i t?o bi?n l?
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int even, odd;
    countEvenOdd(arr, n, &even, &odd);

    printf("So phan tu chan: %d\n", even);
    printf("So phan tu le: %d\n", odd);

    return 0;
}
