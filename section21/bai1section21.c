#include <stdio.h>
   struct Car{
   	char model[50];
   	int year;
   	float price;
   };
   int main (){
	struct Car car01={
		"xe di thi xa",
		2019,
		1600000000
	};
   printf("ten cua xe la: %s \n",car01.model);
   printf("nam san xuat la: %d \n",car01.year);
   printf("gia xe la: %.0f\n",car01.price);
   }
   
