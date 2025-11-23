#include <stdio.h>
#define MAX 100

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student students[MAX];
    int n = 0, choice;
    do {
        printf("MENU:\n");
        printf("1. Nhap thong tin hoc sinh\n");
        printf("2. Hien thi thong tin hoc sinh\n");
        printf("3. Tinh diem trung binh cua tat ca hoc sinh\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                if (n >= MAX) {
                    printf("Danh sach da day!\n");
                    break;
                }
                printf("\nNhap hoc sinh thu %d:\n", n + 1);
                printf("Nhap ten: ");
                fflush(stdin);
                fgets(students[n].name, sizeof(students[n].name), stdin);

                printf("Nhap tuoi: ");
                scanf("%d", &students[n].age);

                printf("Nhap diem: ");
                scanf("%f", &students[n].grade);
				printf("\n");
                n++;
                break;
            }

            case 2: {
                if (n == 0) {
                    printf("Chua co hoc sinh nao!\n");
                } else {
                    printf("\n--- Danh sach hoc sinh ---\n");
                    for (int i = 0; i < n; i++) {
                        printf("HS %d:\n", i + 1);
                        printf("  Ten : %s", students[i].name);
                        printf("  Tuoi: %d\n", students[i].age);
                        printf("  Diem: %.2f\n", students[i].grade);
                    }
                }
                printf("\n");
                break;
            }

            case 3: {
                if (n == 0) {
                    printf("Chua co hoc sinh de tinh!\n");
                } else {
                    float sum = 0;
                    for (int i = 0; i < n; i++) sum += students[i].grade;
                    printf("\nDiem trung binh = %.2f\n\n", sum / n);
                }
                break;
            }

            case 0:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);
    return 0;
}
