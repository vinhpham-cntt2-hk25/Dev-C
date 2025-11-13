#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str1[100], str2[100];

    printf("Nhap vao chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Nhap vao chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    toLowerCase(str1);
    toLowerCase(str2);

    if (strcmp(str1, str2) == 0) {
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }

    return 0;
}
