#include<stdio.h>
int main(){
int a,b,c;
printf("nhap canh thu nhat: \n");
scanf("%d",&a); 
printf("nhap canh thu hai: \n");
scanf("%d",&b); 
printf("nhap canh thu ba: \n");
scanf("%d",&c);
	if(a + b > c && a + c > b && b +c > a) { 
	printf("la 3 canh tam giac"); 
	}else{ 
	printf("khong phai ba canh tam giac");
	}
return 0;
}

