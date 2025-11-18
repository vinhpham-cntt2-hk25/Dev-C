#include <stdio.h>
#include <string.h>

struct student{
	char name[50];
	int age;
	char phoneNumber[100];
};

int main(){
    const int NUM_STUDENTS = 5;
    struct student students[NUM_STUDENTS];

    printf("--- Nhap thong tin cho 5 Sinh vien ---\n");
    for(int i = 0; i < NUM_STUDENTS; i++){
        printf("\nNhap thong tin Sinh vien thu %d:\n", i + 1);

        printf("Ten: ");
        scanf("%s", students[i].name);


        printf("Tuoi: ");
        scanf("%d", &students[i].age); 
        printf("So dien thoai: ");
        scanf("%s", students[i].phoneNumber);
    }
    
    printf("\n\n--- THONG TIN CAC SINH VIEN DA NHAP ---\n");
    for(int i = 0; i < NUM_STUDENTS; i++){
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("  - Ten: %s\n", students[i].name);
        printf("  - Tuoi: %d\n", students[i].age);
        printf("  - So dien thoai: %s\n", students[i].phoneNumber);
    }
    printf("\n---------------------------------------\n");
    printf("Nhan ENTER de thoat chuong trinh...");
    getchar(); 

    return 0;
}
