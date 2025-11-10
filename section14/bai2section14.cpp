#include <stdio.h>

// Khai báo function (hàm) in m?ng
void inMang(int arr[], int size);

int main() {
    int n, i;
    int arr[100];

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nCac phan tu trong mang la:\n");
    inMang(arr, n);

    return 0;
}

void inMang(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
