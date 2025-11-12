#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Hello 2025 CNTT2";
    int count = 0;
    printf("The declared string is: %s\n", str);
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }
    printf("The number of alphabetic characters in the string is: %d", count);
    return 0;
}
