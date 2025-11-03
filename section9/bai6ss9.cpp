#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nNhap gia tri can tim x: ");
    scanf("%d", &x);

    int found = 0;
    printf("\nGia tri %d xuat hien tai vi tri: ", x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("%d ", i + 1); 
            found = 1;
        }
    }

    if (!found) {
        printf("Khong co trong mang.");
    }

    printf("\n");
    return 0;
}
