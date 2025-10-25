#include<stdio.h>
int main(){
int n;
printf("nhap so n(n>1)\n");
scanf("%d",&n); 
float A;
	A  = 1.0 / ((n - 1) * n) + 1.0 / (n * (n + 1)) + 1.0 / ((n + 1) * (n + 2));
	printf("A=%.5f", A);
return 0;
}

