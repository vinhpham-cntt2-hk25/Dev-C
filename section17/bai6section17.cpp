#include <stdio.h>
#include <string.h>

void findLongestWord(char str[]) {
    char *token;
    char longest[100] = "";
    int maxLen = 0;

    token = strtok(str, " ");
    while (token != NULL) {
        int len = strlen(token);

        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, token);
        }

        token = strtok(NULL, " ");
    }

    printf("Tu dai nhat: %s\n", longest);
    printf("Do dai: %d\n", maxLen);
}

int main() {
    char str[200];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    findLongestWord(str);

    return 0;
}
