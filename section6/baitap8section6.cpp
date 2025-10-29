      
#include <stdio.h>

int main() {
	int a,b,x,y,temp,least_common_multiple,least_common_divisor;
	printf("Nhap so nguyen duong: ");
	scanf("%d", &a);
	printf("nhap so nguyen duong: ");
	scanf("%d", &b);
	if(a <= 0 || b <= 0) {
		printf("Vui long nhap dung gia tri");
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
    printf("Boi chung nho nhat la: %d", least_common_multiple);
	return 0; 
} 
