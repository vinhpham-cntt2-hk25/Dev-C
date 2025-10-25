#include<stdio.h>
#include<math.h> 
int main(){
	int a,b;
	printf("nhap so a\n");
	scanf("%d",&a); 
	printf("nhap so b\n");
	scanf("%d",&b);
	float S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(a * a + b * b));
	printf("S=%.2f",S);

return 0;
}

