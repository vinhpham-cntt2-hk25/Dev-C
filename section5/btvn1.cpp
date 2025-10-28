#include<stdio.h>
int main(){
int a,b;
printf("nhap so a ");
scanf("%d",&a);
printf("nhap so b ");
scanf("%d",&b); 
if(a > b){
	printf("so lon hon la: %d",a); 
}else if(a < b){
	printf("so lon hon la: %d",b);
}else if( a == b){
	printf("hai so bang nhau"); 
} 
return 0;
}

