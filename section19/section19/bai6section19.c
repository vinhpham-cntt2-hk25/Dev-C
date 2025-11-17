#include <stdio.h>

#define MAX 100  

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);  
    }
}

int main() {
    int n;
    int A[MAX], B[MAX];  

    do {
        printf("Nhap so phan tu cua mang (<= %d): ", MAX);
        if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
            printf("Gia tri khong hop le, nhap lai!\n");
            while(getchar() != '\n'); // xoa bo dem nhap
        } else break;
    } while (1)
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap A[%d]: ", i);
            if (scanf("%d", A + i) == 1) break;
            else {
                printf("Gia tri khong hop le, nhap lai!\n");
                while(getchar() != '\n');
            }
        }
    }
    copyArray(A, B, n);

    printf("Mang B sau khi sao chep tu A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(B + i));
    }
    printf("\n");

    return 0;
}
