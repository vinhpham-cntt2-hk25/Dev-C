#include <stdio.h>

void timPhanTuNhieuNhat(int arr[], int n, int *phanTu, int *soLan) {
    int i, j;
    int maxCount = 0; 
    int element = arr[0]; 

    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    *phanTu = element; 
    *soLan = maxCount;
}

int main() {
    int arr[100], n, i;
    int phanTu, soLan;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu trong mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    timPhanTuNhieuNhat(arr, n, &phanTu, &soLan);

    printf("Phan tu xuat hien nhieu nhat la: %d\n", phanTu);
    printf("So lan xuat hien: %d\n", soLan);

    return 0;
}
