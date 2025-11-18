#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B",   21, "0987654321"},
        {3, "Le Van C",     19, "0933445566"},
        {4, "Pham Thi D",   22, "0909123123"},
        {5, "Hoang Van E",  20, "0912345678"}
    };

    int currentSize = 5;  

    printf("=== THEM SINH VIEN MOI ===\n");

    if (currentSize >= 50) {
        printf("Mang sinh vien da day! Khong the them moi.\n");
        return 0;
    }

    students[currentSize].id = currentSize + 1; 

    getchar();

    printf("Nhap ten sinh vien: ");
    fgets(students[currentSize].name, sizeof(students[currentSize].name), stdin);
    students[currentSize].name[strcspn(students[currentSize].name, "\n")] = 0;

    printf("Nhap tuoi: ");
    scanf("%d", &students[currentSize].age);

    getchar(); 

    printf("Nhap so dien thoai: ");
    fgets(students[currentSize].phoneNumber, sizeof(students[currentSize].phoneNumber), stdin);
    students[currentSize].phoneNumber[strcspn(students[currentSize].phoneNumber, "\n")] = 0;

    currentSize++; 
    printf("\n=== DANH SACH SINH VIEN SAU KHI THEM ===\n");
    for (int i = 0; i < currentSize; i++) {
        printf("\nID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

