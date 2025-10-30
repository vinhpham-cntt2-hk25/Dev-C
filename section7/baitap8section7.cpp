#include <stdio.h>

int main() {
    long n;   
    int x, count = 0;
    

    printf("Enter an integer n: ");
    scanf("%ld", &n);

    printf("Enter a digit x (0-9): ");
    scanf("%d", &x);

    if (x < 0 || x > 9) {
        printf("Digit x must be between 0 and 9!\n");
        return 1;
    }

    if (n < 0) {
        n = -n;
    }
    if (n == 0 && x == 0) {
        count = 1;
    } else {
        while (n != 0) {
            int digit = n % 10; 
            if (digit == x) {
                count++;
            }
            n /= 10; 
        }
    }
    printf("The digit %d appears %d time(s) in the number.\n", x, count);

    return 0;
}
