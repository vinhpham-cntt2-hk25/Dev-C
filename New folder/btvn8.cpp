#include<stdio.h>
int main(){
	int number;
	printf("moi nhap so\n");
	scanf("%d",&number);
	int a= number % 10;
	int b = (number / 10) % 10;
	int c = (number / 100) % 10;
	int d = (number / 1000) % 10;
	int SoNghichDao = a * 1000 + b *100 + c * 10 + d;
	printf("so nghich dao la: %d",SoNghichDao); 
return 0;
}

