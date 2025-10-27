#include<stdio.h>
int main(){
int year;
printf("nhap nam: ");
scanf("%d",&year);
if(year % 4 == 0 && year % 100 != 0){
	printf("nam %d la nam nhuan",year); 
}else if(year % 400 ==0){
	printf("nam %d la nam nhuan",year); 
}else {
   	printf("nam %d khong phai la nam nhuan",year);  
}
return 0;
}

