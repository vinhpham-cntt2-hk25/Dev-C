#include <stdio.h>
#define MAX_SIZE 100

int linearSearch(int arr[], int n, int target) {
    // 
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n, target, result;

    printf("Nhap so luong phan tu cua mang: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Loi nhap lieu hoac so luong phan tu khong hop le.\n");
        return 1;
    }

    int arr[MAX_SIZE]; 

    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Loi nhap lieu.\n");
            return 1;
        }
    }

    printf("Nhap gia tri can tim (target): ");
    if (scanf("%d", &target) != 1) {
        printf("Loi nhap lieu.\n");
        return 1;
    }

    result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("-> So %d ton tai o chi so: %d\n", target, result);
    } else {
        printf("-> Khong tim thay\n");
    }

    return 0;
}
