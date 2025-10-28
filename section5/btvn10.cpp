#include<stdio.h>
int main(){
int SoDien;
int HoTieuDung;
printf("so dien: ");
scanf("%d",&SoDien);
printf("Ho tieu dung ");
scanf("%d",&HoTieuDung);
int TienDien,TienBacThang;
float PhuPhi;
 //tien bac thang
if(SoDien < 0){
	printf("khong hop le");
	break;
}else if (SoDien <= 50){
	TienBacThang = SoDien * 1500;
}else if (SoDien <= 100){
	TienBacThang = 50 * 1500 + (SoDien - 50) * 2000;
}else if (SoDien <= 200){
	TienBacThang = 50 * 1500 + 50 * 2000 + (SoDien - 100) * 2500;
}else if (SoDien > 200){
	TienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (SoDien - 200) * 3000;
}
// phu phi
switch(HoTieuDung){
	case 1:
		PhuPhi = TienBacThang * (5.0 / 100);
	break;
	case 2:
		PhuPhi = TienBacThang * (10.0 / 100);
	break;
	case 3:
		PhuPhi = TienBacThang * (8.0 / 100);
	break;
	
}
 TienDien = TienBacThang + PhuPhi;
 printf("tong tien la: %d",TienDien);
return 0;
}

