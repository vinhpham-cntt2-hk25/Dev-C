#include<stdio.h>
int main(){
int chiSoCu, chiSoMoi, soDien, tongTien;
printf("moi nhap chi so cu(kWh) ");
scanf("%d",&chiSoCu);
printf("\nmoi nhap chi so moi(kWh) ");
scanf("%d",&chiSoMoi);
soDien = chiSoMoi - chiSoCu;
	if(soDien <= 0){printf("so tien dien bang 0"); 
	}else if(soDien < 50){
		tongTien = soDien * 10000;
		printf("so tien dien la: %d",tongTien); 
	}else if(soDien < 100){
		tongTien = 50 * 10000 + (soDien - 50) * 15000; 
		printf("so tien dien la: %d", tongTien);
	}else if(soDien < 150){
		tongTien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
		printf("so tien dien la: %d", tongTien);
	}else if(soDien < 200){
		tongTien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
	 	printf("so tien dien la: %d", tongTien);
	}else if(200 <= soDien){
		tongTien = 50 * 10000 + 50 * 15000 + 50 * 25000 + (soDien - 200) * 30000;
		printf("so tien dien la: %d", tongTien);
	}
return 0;
}

