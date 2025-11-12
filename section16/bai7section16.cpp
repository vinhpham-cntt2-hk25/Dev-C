#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Hello 2025!!!";
    int letters = 0, digits = 0, special = 0;
    printf("The declared string is: %s\n", str);
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isspace(str[i])) {
            special++;
        }
    }
    printf("Number of characters is alphabetic: %d.\n", letters);
    printf("Number of characters is digit: %d.\n", digits);
    printf("Number of special characters: %d.", special);
    return 0;
}

