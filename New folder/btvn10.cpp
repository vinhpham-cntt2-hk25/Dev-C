#include<stdio.h>
int main(){
int a,b,c;
printf("nhap so a=");
scanf("%d",&a);
printf("\nnhap so b=");
scanf("%d",&b);
printf("\nnhap so c=");
scanf("%d",&c);
if(a >= b && b >= c){
	printf("thu tu tang dan %d %d %d",c,b,a); 
}else if(a>=c && c>=b){
	printf("thu tu tang dan %d %d %d",b,c,a); 
}else if(b>=a && a>=c){
	printf("thu tu tang dan %d %d %d",c,a,b);
}else if(b>=c && c>=a){
	printf("thu tu tang dan %d %d %d",a,c,b);
}else if(c>=a && a>=b){
	printf("thu tu tang dan %d %d %d",b,a,c);
}else if(c>=b && b>=a){
	printf("thu tu tang dan %d %d %d",a,b,c);
}
return 0;
}

