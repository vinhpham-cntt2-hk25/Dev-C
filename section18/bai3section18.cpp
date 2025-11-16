#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x; 
    *x = *y;     
    *y = temp;    
}

int main() {
    int a = 5;
    int b = 10;

    printf("Gia tri ban dau: a = %d, b = %d\n", a, b);

    // G?i hàm swap, truy?n vào d?a ch? c?a a và b
    swap(&a, &b);

    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);

    return 0;
}
