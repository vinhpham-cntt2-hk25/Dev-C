#include<stdio.h>
int main(){
float average_score;
printf("nhap diem trung binh ");
scanf("%f",&average_score);
	if(average_score >= 8){
		printf("Hoc luc gioi");
	}else if(average_score >= 6.5){
		printf("Hoc luc kha");
	} else if(average_score >= 5){
		printf("Hoc luc trung binh");
	}else if(average_score < 5){
		printf("Hoc luc yeu");
	}
return 0;
}

