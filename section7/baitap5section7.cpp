#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, numDigits = 0;
    int sum = 0;

    printf("enter integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a positive integer!\n");
        return 1;
    }
    temp = n;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }
    if (sum == n)
        printf("%d is the armstrong number.\n", n);
    else
        printf("%d is not an armtrong number.\n", n);

    return 0;
}
