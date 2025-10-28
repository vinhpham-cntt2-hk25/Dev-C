#include<stdio.h>
int main(){
float a,b;
char ToanTu;
printf("nhap so a ");
scanf("%f",&a);
printf("nhap so b ");
scanf("%f",&b);
printf("nhap toan tu ");
scanf(" %c", &ToanTu);
	switch (ToanTu){
	
		case '+':
			printf("ket qua: %.2f + %.2f = %.2f",a,b,a+b);
		break;
		case '-':
			printf("ket qua: %.2f - %.2f = %.2f",a,b,a-b);
		break;
		case '*':
			printf("ket qua: %.2f * %.2f = %.2f",a,b,a*b);
		break;
		case '/':
			if(b == 0){printf("Loi: khong the chia cho 0");
			}else
			printf("ket qua: %.2f / %.2f = %.2f",a,b,a/b);
	
		break;
	default:
		printf("Toan tu khong hop le");
		break;	
	}
return 0;
}

