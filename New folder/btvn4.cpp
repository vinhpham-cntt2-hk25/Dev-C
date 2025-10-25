#include<stdio.h>
int main(){
	float DiemToan, DiemVan, DiemAnh; 
printf("nhap diem toan\n");
scanf("%f",&DiemToan);
printf("nhap diem van\n");
scanf("%f",&DiemVan);
printf("nhap diem anh\n");
scanf("%f",&DiemAnh);
	float TongDiem = DiemToan + DiemVan + DiemAnh;
	float DiemTB = ( DiemToan + DiemVan + DiemAnh)/3;
printf("tong diem cua ban la: %.2f\ndiem trung bình cua ban la: %.2f ",TongDiem, DiemTB); 
 
return 0;
}

