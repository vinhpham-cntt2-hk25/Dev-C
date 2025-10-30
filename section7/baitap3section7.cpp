#include <stdio.h>

int main() {
    int n, temp, reversed = 0, digit;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer!\n");
        return 1;
    }
    temp = n; 
    while (temp != 0) {
        int digit = temp % 10;       
        reversed = reversed * 10 + digit; 
        temp /= 10;                  
    }
    if (n == reversed)
        printf("%d is a symmetric number.\n", n);
    else
        printf("%d not a symmetric number.\n", n);

    return 0;
}
