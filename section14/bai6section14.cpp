#include <stdio.h>
#include <stdbool.h> 

bool laSoHoanHao(int n) {
    if (n <= 0) return false; 
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) { 
        if (n % i == 0) {
            tong += i; 
        }
    }
    return tong == n; 
}

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (laSoHoanHao(a))
        printf("%d la so hoan hao.\n", a);
    else
        printf("%d khong phai la so hoan hao.\n", a);

    if (laSoHoanHao(b))
        printf("%d la so hoan hao.\n", b);
    else
        printf("%d khong phai la so hoan hao.\n", b);

    return 0;
}
