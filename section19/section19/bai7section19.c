#include <stdio.h>

#define MAX 100  

void inputArray(int *arr, int *n) {
    int temp;
    do {
        printf("Nhap so phan tu mang (<= %d): ", MAX);
        if (scanf("%d", &temp) != 1 || temp <= 0 || temp > MAX) {
            printf("Gia tri khong hop le, nhap lai!\n");
            while(getchar() != '\n');
        } else break;
    } while(1);
    *n = temp;

    for (int i = 0; i < *n; i++) {
        while(1) {
            printf("Nhap arr[%d]: ", i);
            if (scanf("%d", arr + i) == 1) break;
            else {
                printf("Gia tri khong hop le, nhap lai!\n");
                while(getchar() != '\n');
            }
        }
    }
}

void printArray(int *arr, int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Ham tim phan tu lon nhat
int maxElement(int *arr, int n) {
    int max = *(arr + 0);
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");

        if (scanf("%d", &choice) != 1) {
            printf("Lua chon khong hop le!\n");
            while(getchar() != '\n');
            continue;
        }

        switch(choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                if (n > 0) printArray(arr, n);
                else printf("Mang chua duoc nhap!\n");
                break;
            case 3:
                printf("Do dai mang: %d\n", n);
                break;
            case 4:
                if (n > 0) printf("Tong cac phan tu: %d\n", sumArray(arr, n));
                else printf("Mang chua duoc nhap!\n");
                break;
            case 5:
                if (n > 0) printf("Phan tu lon nhat: %d\n", maxElement(arr, n));
                else printf("Mang chua duoc nhap!\n");
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 6);

    return 0;
}
