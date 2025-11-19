#include <stdio.h>

struct Student{
	char name[50];
	int age;
	float grade;
};
int main(){
	struct Student student01={
		"Chu Gia Huy",
		19,
		1.5
	};
	printf("ten cua sinh vien 1 la: %s\n",student01.name);
	printf("tuoi cua sinh vien 1 la: %d\n",student01.age);
	printf("diem trung binh cua sinh vien 1 la: %.2f\n",student01.grade);
}
