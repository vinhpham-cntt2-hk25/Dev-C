#include <stdio.h>

int reverse_number(int n){
	int result;
	while (n != 0){
		result = result *10 + n%10 ; 
		n /= 10; 
	} 
	return result; 
} 
int main() {
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	printf("So dao nguoc cua %d la %d",n,reverse_number(n));
	return 0; 
} 

