#include <stdio.h>
#include <stdlib.h>

void inputArray(int *arr, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", arr + i);   // dùng con tr?
    }
}

void displayArray(int *arr, int n) {
    int i;
    printf("Cac phan tu trong mang: ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int arrayLength(int n) {
    return n;
}

int sumArray(int *arr, int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int maxElement(int *arr, int n) {
    int i;
    int max = *arr;   // ph?n t? d?u tiên
    for(i = 1; i < n; i++) {
        if(*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int n, choice;
    int *arr = NULL; 
    int daNhap = 0;

    while(1) {
        printf("\n----- MENU -----\n");
        printf("1. Nhap so phan tu va tung phan tu\n");
        printf("2. Hien thi mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);

                arr = (int *)malloc(n * sizeof(int));
                if(arr == NULL) {
                    printf("Khong du bo nho!\n");
                    return 1;
                }

                inputArray(arr, n);
                daNhap = 1;
                break;

            case 2:
                if(!daNhap) {
                    printf("Vui long nhap mang truoc!\n");
                } else {
                    displayArray(arr, n);
                }
                break;

            case 3:
                if(!daNhap) {
                    printf("Vui long nhap mang truoc!\n");
                } else {
                    printf("Do dai mang: %d\n", arrayLength(n));
                }
                break;

            case 4:
                if(!daNhap) {
                    printf("Vui long nhap mang truoc!\n");
                } else {
                    printf("Tong cac phan tu: %d\n", sumArray(arr, n));
                }
                break;

            case 5:
                if(!daNhap) {
                    printf("Vui long nhap mang truoc!\n");
                } else {
                    printf("Phan tu lon nhat: %d\n", maxElement(arr, n));
                }
                break;

            case 6:
                printf("Thoat chuong trinh...\n");
                free(arr);
                return 0;

            default:
                printf("Lua chon khong hop le!\n");
        }
    }
}
