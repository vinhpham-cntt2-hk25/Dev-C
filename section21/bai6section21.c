#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void findStudent(struct Student students[], int size, char searchName[]) {
    int i;
    for (i = 0; i < size; i++) {

        if (strncmp(students[i].name, searchName, strlen(searchName)) == 0) {
            printf("\n--- Tim thay hoc sinh ---\n");
            printf("Ten: %s", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("Diem trung binh: %.2f\n", students[i].grade);
            return;
        }
    }

    printf("\nKhong tim thay hoc sinh co ten '%s'\n", searchName);
}

int main() {
    struct Student students[5];
    int i;
    char searchName[50];

    for (i = 0; i < 5; i++) {
        printf("Nhap thong tin hoc sinh thu %d:\n", i + 1);

        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        printf("Diem trung binh: ");
        scanf("%f", &students[i].grade);

        getchar(); 

        printf("\n");
    }

    printf("Nhap ten hoc sinh muon tim: ");
    fgets(searchName, sizeof(searchName), stdin);

    findStudent(students, 5, searchName);

    return 0;
}

