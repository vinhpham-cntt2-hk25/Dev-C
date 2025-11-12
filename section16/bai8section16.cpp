#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[] = "hello world";
    printf("original string: %s.\n", str);
    int length = strlen(str);
    int newWord = 1;
    for (int i = 0; i < length; i++) {
        if (isspace(str[i])) {
            newWord = 1;
        } else {
            if (newWord) {
                str[i] = toupper(str[i]);
                newWord = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }
    printf("string after uppercase after uppercase the first letter of each element: %s.", str);
    return 0;
}
