#include <stdio.h>
#include <stdio.h>

int main() {
    int n, reversed = 0;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0) {
        int digit = temp % 10;           
        reversed = reversed * 10 + digit; 
        temp /= 10;                
    }

    printf("The reversed number of %d is: %d\n", n, reversed);

    return 0;
}

