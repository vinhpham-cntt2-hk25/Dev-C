#include<stdio.h>
#include<math.h>
int main(){
float S;
int a,b;
printf("nhap so a(a>0) \n");
scanf("%d",&a);
printf("nhap so b(b>0) \n");
scanf("%d",&b); 
 
S = sqrt(a * a + b * b) / (a + b) + (sqrt(a) + sqrt(b)) / (a * b);
printf("S= %.2f", S); 
 return 0;
}

