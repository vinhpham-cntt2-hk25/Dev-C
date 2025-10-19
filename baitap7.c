#include <stdio.h>

int main() {
	int number = 12345, sum = 0;
	sum += number % 10;
	number = number / 10;
	sum += number % 10;
	number = number / 10;
	sum += number % 10;
	number = number / 10;
	sum += number % 10;
	number = number / 10;
	sum += number % 10;
	printf("Tong = %d", sum);
	return 0;
}
