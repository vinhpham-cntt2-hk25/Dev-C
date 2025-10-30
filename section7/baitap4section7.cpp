#include <stdio.h>

int main() {
    int m, n;
    printf("Enter length (number of lines) :");
    scanf("%d", &m);
    printf("Enter width and length (number of columns) :");
    scanf("%d", &n);
    
    if (m <= 0 || n <= 0) {
        printf("Please enter m, n > 0!\n");
        return 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
