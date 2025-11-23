#include <stdio.h>
#include <string.h>
struct Contact {
    char name[50];
    char phoneNumber[15];
    char email[50];
};

int main() {
    struct Contact contacts[100];
    int count = 0;
    int choice;
    do {
        printf("MENU:\n");
        printf("1. Them lien he\n");
        printf("2. Hien thi tat ca lien he\n");
        printf("3. Tim kiem theo ten\n");
        printf("4. Xoa lien he theo ten\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            printf("Nhap ten: ");
            fflush(stdin);
            fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
            contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';

            printf("Nhap so dien thoai: ");
            fflush(stdin);
            fgets(contacts[count].phoneNumber, sizeof(contacts[count].phoneNumber), stdin);
            contacts[count].phoneNumber[strcspn(contacts[count].phoneNumber, "\n")] = '\0';

            printf("Nhap email: ");
            fflush(stdin);
            fgets(contacts[count].email, sizeof(contacts[count].email), stdin);
            contacts[count].email[strcspn(contacts[count].email, "\n")] = '\0';

            count++;
            printf("Da them lien he!\n");
        }
        else if (choice == 2) {
            if (count == 0) {
                printf("Danh sach rong!\n");
            } else {
                printf("\nDANH SACH LIEN HE:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s - %s - %s\n",
                        i + 1,
                        contacts[i].name,
                        contacts[i].phoneNumber,
                        contacts[i].email
                    );
                }
            }
        }
        else if (choice == 3) {
            char searchName[50];
            printf("Nhap ten can tim: ");
            fflush(stdin);
            fgets(searchName, sizeof(searchName), stdin);
            searchName[strcspn(searchName, "\n")] = '\0';

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("Tim thay: %s - %s - %s\n",
                        contacts[i].name,
                        contacts[i].phoneNumber,
                        contacts[i].email
                    );
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Khong tim thay lien he!\n");
        }
        else if (choice == 4) {
            char delName[50];
            printf("Nhap ten can xoa: ");
            fflush(stdin);
            fgets(delName, sizeof(delName), stdin);
            delName[strcspn(delName, "\n")] = '\0';

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, delName) == 0) {
                    for (int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    found = 1;
                    printf("Da xoa lien he!\n");
                    break;
                }
            }
            if (!found) printf("Khong tim thay lien he!\n");
        }
        else if (choice != 0) {
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    printf("Thoat chuong trinh.\n");
    return 0;
}
