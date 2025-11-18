#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];
    int n = 5;

    printf("Nhap thong tin 5 sinh vien: \n");

    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;  

        printf("\nSinh vien %d:\n", i + 1);

        printf("Nhap ten: ");
        fflush(stdin);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        fflush(stdin);
        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
    }

    printf("\n=== Danh sach sinh vien ===\n");
    for (int i = 0; i < n; i++) {
        printf("\nID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("SDT: %s", students[i].phoneNumber);
    }

    return 0;
}

