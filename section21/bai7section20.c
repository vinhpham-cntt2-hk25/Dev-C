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
    int idToDelete;
    int index = -1;

    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &idToDelete);

    for (int i = 0; i < currentSize; i++) {
        if (students[i].id == idToDelete) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("\n*** Khong ton tai sinh vien co ID = %d ***\n", idToDelete);
    } else {
        
        for (int i = index; i < currentSize - 1; i++) {
            students[i] = students[i + 1];
        }
        currentSize--;

        printf("\n--> Da xoa sinh vien co ID = %d\n", idToDelete);
    }

    printf("\n=== DANH SACH SINH VIEN SAU KHI XOA ===\n");
    for (int i = 0; i < currentSize; i++) {
        printf("\nID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

