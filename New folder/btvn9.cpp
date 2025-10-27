#include <stdio.h>

int main (){
	int day, month, year;
	printf("Ngay = ");
	scanf("%d",&day);
	
	printf("Thang = ");
	scanf("%d",&month);
	
	printf("Nam = ");
	scanf("%d",&year);
	int hop_le = 1;
	if(year <= 0){
		hop_le = 0;          
	}
	if(month<1 && month >12){
		hop_le = 1;
	}
	int day_in_month;
	
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			day_in_month = 31;
			break;
		case 4: case 6: case 9: case 11:
			day_in_month = 30;
			break;
		case 2:
			if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
				day_in_month = 29;
			}else{
				day_in_month = 28;
			}
			break;
			default:
				day_in_month = 0;
	} 
	if(day < 1 || day > day_in_month){
		hop_le = 1;
	}
	if(hop_le){
		printf("Ngay thang nam hop le\n");
	}else{
		printf("Ngay thang nam khong hop le");
	}
	return 0;
}
