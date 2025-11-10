#include <stdio.h>

long long tinhGiaiThua(int n);

int main() {
    int so;
    long long ketQua;

    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &so);

    ketQua = tinhGiaiThua(so); 

    if (ketQua != -1)
        printf("Giai thua cua %d la: %lld\n", so, ketQua);

    return 0;
}

long long tinhGiaiThua(int n) {
    if (n < 0) {
        printf("Khong ton tai giai thua cho so am!\n");
        return -1; 
    }

    long long kq = 1;
    for (int i = 1; i <= n; i++) {
        kq *= i;
    }

    return kq; 
}
