#include <stdio.h>

int main() {
    char ch;

    printf("Nhap ky tu: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) { // A-Z
        ch = ch + 32; // chuy?n thành ch? thu?ng
        printf("Ky tu sau khi chuyen doi: %c\n", ch);
    }
    else if (ch >= 97 && ch <= 122) { // a-z
        ch = ch - 32; // chuy?n thành ch? hoa
        printf("Ky tu sau khi chuyen doi: %c\n", ch);
    }
    else {
        printf("Khong phai chu cai\n");
    }

    return 0;
}

