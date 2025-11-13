#include <stdio.h>
#include <string.h>

int kiemTraMatKhau(char s[]) {
    int i;
    int hoa = 0, thuong = 0, so = 0, dacbiet = 0;
    int n = strlen(s);

    for (i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') hoa = 1;
        else if (s[i] >= 'a' && s[i] <= 'z') thuong = 1;
        else if (s[i] >= '0' && s[i] <= '9') so = 1;
        else dacbiet = 1;
    }

    if (n >= 8 && hoa && thuong && so && dacbiet)
        return 1; 
    else
        return 0; 
}

int main() {
    char s[100];

    printf("Nhap mat khau: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    if (kiemTraMatKhau(s))
        printf("Hop le\n");
    else
        printf("Khong hop le\n");

    return 0;
}
