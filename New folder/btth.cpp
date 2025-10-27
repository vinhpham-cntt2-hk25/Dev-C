#include<stdio.h>
int main(){
int nam;
float DiemTB;
printf("nhap nam sinh ");
scanf("%d",&nam); 
printf("nhap diem trung binh ");
scanf("%f",&DiemTB);
printf("Thong tin sinh vien:\n"); 
int tuoi = 2025 - nam; 
	if(nam >1990 && nam <= 2025){
		printf("Nam sinh: %d\n",nam); 
	}else{
		printf("Nam sinh khong hop le\n"); 
	} 
	if(tuoi >= 18){printf("Tuoi: %d\n",tuoi); 
	}else {printf("chua du 18 tuoi\n"); 
	}
	if(DiemTB < 5.0){
		printf("Hoc luc: Yeu"); 
	} else if(DiemTB < 6.4){
		printf("Hoc luc: Trung binh"); 
	} else if(DiemTB < 7.9){
		printf("Hoc luc: Kha"); 
	} else if(DiemTB >= 8.0){
		printf("Hoc luc: Tot"); 
	} 
return 0;
}

