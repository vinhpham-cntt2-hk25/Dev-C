#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello World";
    int count = 0;
    int Word = 0;
    printf("Chuoi da khai bao la: %s\n", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' &&Word == 0) {
            Word = 1;
            count++;
        } else if (str[i] == ' ') {
            Word = 0;
        }
    }
    printf("So tu trong chuoi la: %d", count);
    return 0;
}
