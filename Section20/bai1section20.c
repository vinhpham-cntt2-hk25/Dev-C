#include <stdio.h>
struct Information{
	char name [50];
	int age;
	int phone_number;
};
int main(){
	struct Information student1={
		"Ngoc Vinh",
		18,
		"012311234"
	};

	printf ("ten: %s\n",student1.name);
	printf ("tuoi: %d\n",student1.age);
	printf ("so dien thoai: %s\n",student1.phone_number);
	
}
