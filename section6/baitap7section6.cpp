#include <stdio.h>

int main() {
	int a,b,temp;
	printf("Enter a positive integer: ");
	scanf("%d", &a);
	printf("Enter a positive integer: ");
	scanf("%d", &b);
	if(a <= 0 || b <= 0) {
		printf("Please enter the correct value");
		return 1; 
	} 
	while(b != 0) {
		temp = a % b;
		a = b;
		b = temp; 
	} 
	printf("Greatest common divisor: %d\n", a);
	return 0; 
} 
