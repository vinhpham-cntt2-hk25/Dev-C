#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    // Nh?p ký t? c?n xóa
    printf("Enter the character to delete: ");
    scanf("%c", &ch);

    int len = strlen(str);
    int j = 0; 

    for (int i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j] = str[i]; 
            j++;
        }
    }
    str[j] = '\0'; 

    printf("string after deleting characters '%c': %s\n", ch, str);

    return 0;
}

