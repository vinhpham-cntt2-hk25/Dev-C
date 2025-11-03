#include <stdio.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int n;

    printf("--- NHAP VAO KICH THUOC MANG N x N ---\n");

    do {
        printf("Moi ban nhap vao kich thuoc n (n > 0): ");
        if (scanf("%d", &n) != 1 || n <= 0) {
            printf("Loi nhap lieu!\n");
            clearInputBuffer();
            n = 0;
        } else {
            clearInputBuffer(); 
        }
    } while (n <= 0);

    int a[n][n];

    printf("\n--- NHAP GIA TRI CHO TUNG PHAN TU ---\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            while (1) {
                printf("Moi ban nhap vao gia tri phan tu a[%d][%d]: ", i, j);
                if (scanf("%d", &a[i][j]) != 1) {
                    printf("Loi nhap lieu! Vui long nhap so nguyen.\n");
                    clearInputBuffer();
                } else {
                    clearInputBuffer();
                    break;
                }
            }
        }
    }

    printf("\n--- MA TRAN HINH VUONG BAN DA NHAP ---\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
