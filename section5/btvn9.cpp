#include<stdio.h>
int main(){
float HeSoLuong;
int NgayCong;
 printf("nhap he so luong ");
 scanf("%f",&HeSoLuong);
 printf("so ngay cong ");
 scanf("%d",&NgayCong);
 int Luong;
 int Thuong;
 if(NgayCong > 26){
 			Thuong = (NgayCong - 26) * 200000;
 }else{Thuong = 0;
 }
 int PhuCap;
 if(HeSoLuong == 1){
 	PhuCap = 500000;
 	Luong = NgayCong * 160000 * HeSoLuong + PhuCap + Thuong;
 	printf("luong thang la: %d",Luong);
}else if(HeSoLuong == 2){
	PhuCap = 1000000;
	Luong = NgayCong * 160000 * HeSoLuong + PhuCap + Thuong;
 	printf("luong thang la: %d",Luong);
}else if(HeSoLuong == 3){
	PhuCap = 2000000;
	Luong = NgayCong * 160000 * HeSoLuong + PhuCap + Thuong;
 	printf("luong thang la: %d",Luong);
}

return 0;
}
