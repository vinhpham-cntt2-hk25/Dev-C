#include <stdio.h>

#define MAX 100  
void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int n;
    int arr[MAX];
    int even, odd;

    do {
        printf("Nhap so phan tu mang (<= %d): ", MAX);
        if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
            printf("Gia tri khong hop le, nhap lai!\n");
            while(getchar() != '\n'); 
        } else break;
    } while (1);

    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap arr[%d]: ", i);
            if (scanf("%d", arr + i) == 1) break;
            else {
                printf("Gia tri khong hop le, nhap lai!\n");
                while(getchar() != '\n'); // xóa bộ đệm
            }
        }
    }

    countEvenOdd(arr, n, &even, &odd);

    printf("So phan tu chan: %d\n", even);
    printf("So phan tu le: %d\n", odd);

    return 0;
}


