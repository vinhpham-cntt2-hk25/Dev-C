#include<stdio.h>
int main(){
	 int number ;
	 printf("hay nhap so\n");
	 scanf("%d",&number); 
	 int a = number %10;
	 int b = (number / 10) % 10;
	 int c = (number / 100) % 10;  
	 int d = (number / 1000) % 10; 
	 int tong = a + b + c + d;
	 printf("tong la: %d", tong); 
return 0;
}

