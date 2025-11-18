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

    int idToEdit;
    int found = 0;

    printf("Nhap ID sinh vien muon sua: ");
    scanf("%d", &idToEdit);
    getchar(); 

    for (int i = 0; i < 5; i++) {
        if (students[i].id == idToEdit) {
            found = 1;
            printf("\n--> Da tim thay sinh vien co ID = %d\n", idToEdit);

            printf("Nhap ten moi: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0; 

            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);

            break;
        }
    }

    if (!found) {
        printf("\n*** Khong tim thay sinh vien co ID = %d ***\n", idToEdit);
    }

    printf("\n===== DANH SACH SINH VIEN =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("SDT: %s\n", students[i].phoneNumber);
    }

    return 0;
}

