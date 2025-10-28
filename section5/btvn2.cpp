#include<stdio.h>
int main(){
int a,b,x;
printf("nhap so a ");
scanf("%d",&a);
printf("nhap so b ");
scanf("%d",&b);
 	if(a == 0 && b == 0){
 		printf("phuong trinh co vo so nghiem"); 
	 }else if(a == 0 && b != 0 ){
	 	printf("phuong trinh vo nghiem");
	 }else if(a != 0){
	 	x = - b / a;
		 printf("phuong trinh co nghiem x= %d",x); 
	 } 
return 0;
}

