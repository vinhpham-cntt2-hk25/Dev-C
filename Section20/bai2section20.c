#include <stdio.h>
#include <string.h>

struct Student{
	char name[50];
	int age;
	char phone_number[20];
};

int main(){
	struct Student student;
	printf("Moi ban nhap ten: ");
	fgets(student.name, sizeof(student.name),stdin);
	student.name[strcspn(student.name,"\n")]='\0';
	
	printf("Moi ban nhap tuoi: ");
	scanf("%d",&student.age);
	getchar();
	
	printf("So dien thoai cua ban: ");
	fgets(student.phone_number, sizeof(student.phone_number),stdin);
	student.phone_number[strcspn(student.phone_number,"\n")]='\0';

    printf("Ten cua sinh vien la %s\n",student.name);
    printf("Tuoi cua sinh vien la %d\n",student.age);
    printf("So dien thoai cua sinh vien la %s",student.phone_number);
    
	return 0;
}
