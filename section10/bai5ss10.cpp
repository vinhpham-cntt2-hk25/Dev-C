#include <stdio.h>
#define MAX_SIZE 100
int countFrequency(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, target, result;


    printf("Nhap so luong phan tu cua mang (n): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Loi nhap lieu hoac so luong phan tu khong hop le.\n");
        return 1;
    }

    int arr[MAX_SIZE];

    printf("Nhap %d phan tu cua mang (arr):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Loi nhap lieu.\n");
            return 1;
        }
    }


    printf("Nhap gia tri can tim va dem (value): ");
    if (scanf("%d", &target) != 1) {
        printf("Loi nhap lieu.\n");
        return 1;
    }


    result = countFrequency(arr, n, target);

    printf("\nOutput:\n");
    if (result > 0) {
        printf("-> Tong so lan xuat hien cua so %d la: %d\n", target, result);
    } else {
        printf("-> So %d khong ton tai trong mang (So lan xuat hien: 0)\n", target);
    }

    return 0;
}
