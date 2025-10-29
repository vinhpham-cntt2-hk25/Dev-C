   
#include <stdio.h>

int main() {
	float number_1,number_2,result; 
	int choose; 
	printf("Nhap so thu nhat: ");
	scanf("%f", &number_1);
	printf("nhap so thu hai: ");
	scanf("%f", &number_2);
	printf("1. Tong 2 so\n");
	printf("2. Hieu 2 so\n");
	printf("3. Tich 2 so\n");
	printf("4. Thuong 2 so\n");
	printf("5. Thoat\n");
	printf("Moi ban lua chon theo so thu tu: ");
	scanf("%d", &choose);
	do {
	 switch(choose){
	 	case 1:
		  result = number_1 + number_2;
		  printf("Tong hai so la: %.2f\n", result);
		  break; 
		case 2:
		  result = number_1 - number_2;
		  printf("Hieu hai so la: %.2f\n", result);
		  break;
		case 3:
		  result = number_1 * number_2;
		  printf("Tich hai so la: %.2f\n", result);
		  break; 
		case 4:
		if(number_2 == 0){
			printf("Loi khong the chia cho 0\n");
		} else {
			result = number_1 / number_2;
			printf("Thuong hai so la: %.2f\n", result);
		  break; 
		}
		case 5:
			printf("dang thoat chuong trinh nhan enter mot lan nua\n");
			break; 
		defualt:
		printf("vui long nhap lai\n");
	 }	if(choose != 5){
		printf("lua chon tiep: ");
		scanf("%d", &choose);
	}
	 } while (choose != 5);
	 return 0; 
	 
} 

