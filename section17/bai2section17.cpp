#include <stdio.h>
#include <string.h>
#include <ctype.h> 


int main() {
    char str[100];
    int choice;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    while (1) {
        printf("\n+------------------MENU------------------+\n");
        printf("1. Chuyen chuoi thanh CHU HOA\n");
        printf("2. Chuyen chuoi thanh chu thuong\n");
        printf("3. Thoat\n");
        printf("------------------------------------------\n");
        printf("Moi ban lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (int i = 0; i < strlen(str); i++)
                    str[i] = toupper(str[i]);
                printf("Chuoi sau khi chuyen thanh CHU HOA: %s\n", str);
                break;

            case 2:
                for (int i = 0; i < strlen(str); i++)
                    str[i] = tolower(str[i]);
                printf("Chuoi sau khi chuyen thanh chu thuong: %s\n", str);
                break;

            case 3:
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    }

    return 0;
}
