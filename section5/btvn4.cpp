#include<stdio.h>
int main(){
int income;
printf("So tien(trieu) ");
scanf("%d",&income);
float tax;
if(income <= 5){
	tax = income * (5.0 / 100);
	printf("Thue thu nhap phai dong: %.2f",tax); 
}else if(income <= 10){
	tax = income * (10.0 / 100);
	printf("Thue thu nhap phai dong: %.2f",tax); 
}else if(income > 10){
	tax = income * (15.0 / 100);
	printf("Thue thu nhap phai dong: %.2f",tax);  
}
return 0;
}

