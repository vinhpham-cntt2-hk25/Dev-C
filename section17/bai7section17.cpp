#include <stdio.h>
#include <string.h>

int main() {
    char A[200], B[100];

    printf("Nhap chuoi A: ");
    fgets(A, sizeof(A), stdin);

    printf("Nhap chuoi B: ");
    fgets(B, sizeof(B), stdin);

    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';

    if (strstr(A, B) != NULL) {
        printf("Co\n");
    } else {
        printf("Khong\n");
    }

    return 0;
}
