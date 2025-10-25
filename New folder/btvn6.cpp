#include<stdio.h>
int main(){
float Day, ChieuCao;
printf("nhap do dai canh day\n");
scanf("%f", &Day);
printf("nhap do dai chieu cao\n");
scanf("%f", &ChieuCao); 
float DienTich = Day * ChieuCao / 2;
printf("dien tich tam giac la: %.2f", DienTich);
return 0;
}

