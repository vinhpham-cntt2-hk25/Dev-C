#include <stdio.h>
#include <string.h>
#include <ctype.h> 


int main() {
    char str[100];
    int choice;
    printf("enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    while (1) {
        printf("\n+------------------MENU------------------+\n");
        printf("1. convert letters to uppercase\n");
        printf("2. onvert letters to lowercase\n");
        printf("3. Exit\n");
        printf("------------------------------------------\n");
        printf("Please choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (int i = 0; i < strlen(str); i++)
                    str[i] = toupper(str[i]);
                printf("string after conversion to uppercase: %s\n", str);
                break;

            case 2:
                for (int i = 0; i < strlen(str); i++)
                    str[i] = tolower(str[i]);
                printf("string after conversion to lowercase: %s\n", str);
                break;

            case 3:
                printf("exit the program.\n");
                return 0;

            default:
                printf("Invalid selection! Please select again.\n");
        }
    }

    return 0;
}

