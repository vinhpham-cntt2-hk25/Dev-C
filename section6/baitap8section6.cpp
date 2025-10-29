      
#include <stdio.h>

int main() {
	int a,b,x,y,temp,least_common_multiple,least_common_divisor;
	printf("Enter a positive integer: ");
	scanf("%d", &a);
	printf("Enter a positive integer: ");
	scanf("%d", &b);
	if(a <= 0 || b <= 0) {
		printf("Please enter the correct value");
		return 1; 
	} 
	x = a;
	y = b;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp; 
	} 
	least_common_divisor = a;
    least_common_multiple = (x * y) / least_common_divisor; 
    printf("Least common multiple: %d", least_common_multiple);
	return 0; 
} 
