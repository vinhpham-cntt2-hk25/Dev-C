#include <stdio.h>
#include <math.h>
int laSoNguyenTo(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            tong += a[i];
        }
    }

    printf("\nTong cac phan tu la so nguyen to trong mang = %d\n", tong);

    return 0;
}
