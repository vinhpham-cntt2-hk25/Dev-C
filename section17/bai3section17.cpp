#include <stdio.h>
#include <string.h>

void concatManual(char str1[], char str2[]) {
    int len1 = 0;
    while (str1[len1] != '\0') len1++; // tìm d? dài str1
    int i = 0;
    while (str2[i] != '\0') {
        str1[len1 + i] = str2[i];
        i++;
    }
    str1[len1 + i] = '\0'; 
}

int main() {
    char str1[200], str2[100];

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 
    char result1[200];
    strcpy(result1, str1);  
    strcat(result1, str2);
    printf("Ket qua noi (strcat): %s\n", result1);

    char result2[200];
    strcpy(result2, str1);
    concatManual(result2, str2);
    printf("Ket qua noi (thu cong): %s\n", result2);

    return 0;
}
