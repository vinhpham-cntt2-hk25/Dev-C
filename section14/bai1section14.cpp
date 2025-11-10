#include <stdio.h>

int tinhTong(int a, int b); 

int main() {
    int x, y, ketQua;

    printf("Nhap so thu nhat: ");
    scanf("%d", &x);

    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    ketQua = tinhTong(x, y);

    printf("Tong cua %d va %d la: %d\n", x, y, ketQua);

    return 0;
}

int tinhTong(int a, int b) {
    return a + b; 
}	
