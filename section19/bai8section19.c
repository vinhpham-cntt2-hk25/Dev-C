#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", arr + i);
    }
}

void printArray(int *arr, int n) {
    printf("Cac phan tu mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void printEven(int *arr, int n) {
    printf("Cac phan tu chan: ");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

void printPrime(int *arr, int n) {
    printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(*(arr + i))) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

void reverseArray(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Mang sau khi dao nguoc: ");
    printArray(arr, n);
}

void sortAscending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void sortDescending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}


void searchElement(int *arr, int n, int x) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            printf("Phan tu %d tim thay tai vi tri %d\n", x, i);
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }
}

int main() {
    int *arr = NULL;
    int n = 0;
    int choice;

    do {
        printf("\n========= MENU =========\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                arr = (int*) malloc(n * sizeof(int));
                if (arr == NULL) {
                    printf("Khong du bo nho!\n");
                    exit(1);
                }
                inputArray(arr, n);
                break;
            case 2:
                if (arr != NULL) printEven(arr, n);
                else printf("Vui long nhap mang truoc!\n");
                break;
            case 3:
                if (arr != NULL) printPrime(arr, n);
                else printf("Vui long nhap mang truoc!\n");
                break;
            case 4:
                if (arr != NULL) reverseArray(arr, n);
                else printf("Vui long nhap mang truoc!\n");
                break;
            case 5:
                if (arr != NULL) {
                    int subChoice;
                    printf("1. Tang dan\n2. Giam dan\nLua chon: ");
                    scanf("%d", &subChoice);
                    if (subChoice == 1) {
                        sortAscending(arr, n);
                        printf("Mang sau khi sap xep tang dan: ");
                        printArray(arr, n);
                    } else if (subChoice == 2) {
                        sortDescending(arr, n);
                        printf("Mang sau khi sap xep giam dan: ");
                        printArray(arr, n);
                    } else {
                        printf("Lua chon khong hop le!\n");
                    }
                } else {
                    printf("Vui long nhap mang truoc!\n");
                }
                break;
            case 6:
                if (arr != NULL) {
                    int x;
                    printf("Nhap phan tu can tim: ");
                    scanf("%d", &x);
                    searchElement(arr, n, x);
                } else {
                    printf("Vui long nhap mang truoc!\n");
                }
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 7);

    free(arr); // giai phong bo nho
    return 0;
}
