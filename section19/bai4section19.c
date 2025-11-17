#include <stdio.h>
#include <stdlib.h>

int countValue(int *arr, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    while (1) {
        printf("Nhap so phan tu mang: ");
        if (scanf("%d", &n) == 1 && n > 0) {
            break;
        } else {
            printf("Gia tri khong hop le, nhap lai!\n");
            while (getchar() != '\n'); // xoa bo dem nhap
        }
    }

    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap phan tu arr[%d]: ", i);
            if (scanf("%d", arr + i) == 1) {
                break;
            } else {
                printf("Gia tri khong hop le, nhap lai!\n");
                while (getchar() != '\n'); 
            }
        }
    }

    int x;
    while (1) {
        printf("Nhap gia tri can tim x: ");
        if (scanf("%d", &x) == 1) {
            break;
        } else {
            printf("Gia tri khong hop le, nhap lai!\n");
            while (getchar() != '\n'); 
        }
    }
    int count = countValue(arr, n, x);
    printf("Gia tri %d xuat hien %d lan trong mang.\n", x, count);

    free(arr); 
    return 0;
}
