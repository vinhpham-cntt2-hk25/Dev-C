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

    printf("=== CHEN SINH VIEN VAO VI TRI BAT KY ===\n");

    if (currentSize >= 50) {
        printf("Mang sinh vien da day, khong the chen!\n");
        return 0;
    }

    int position;
    printf("Nhap vi tri can chen (0 - %d): ", currentSize);
    scanf("%d", &position);

    if (position < 0 || position > currentSize) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    for (int i = currentSize; i > position; i--) {
        students[i] = students[i - 1];
    }

    getchar(); 

    struct Student newStudent;
    newStudent.id = currentSize + 1; 

    printf("Nhap ten sinh vien: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0;

    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);

    getchar();

    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = 0;

    students[position] = newStudent;
    currentSize++;

    printf("\n=== DANH SACH SINH VIEN SAU KHI CHEN ===\n");
    for (int i = 0; i < currentSize; i++) {
        printf("\nID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

