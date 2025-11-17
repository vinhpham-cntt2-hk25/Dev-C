#include <stdio.h>

#define MAX 100  

int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    int arr1[MAX], arr2[MAX]; 

    do {
        printf("Nhap so phan tu cua hai mang (<= %d): ", MAX);
        if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
            printf("Gia tri khong hop le, nhap lai!\n");
            while(getchar() != '\n'); 
        } else break;
    } while (1);

    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap arr1[%d]: ", i);
            if (scanf("%d", arr1 + i) == 1) break;
            else {
                printf("Gia tri khong hop le, nhap lai!\n");
                while(getchar() != '\n');
            }
        }
    }

    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap arr2[%d]: ", i);
            if (scanf("%d", arr2 + i) == 1) break;
            else {
                printf("Gia tri khong hop le, nhap lai!\n");
                while(getchar() != '\n');
            }
        }
    }

    if (compareArrays(arr1, arr2, n)) {
        printf("Hai mang giong nhau.\n");
    } else {
        printf("Hai mang khac nhau.\n");
    }

    return 0;
}
