#include <stdio.h>

int main() {
	int i, n;
	do {
		printf("Nhap so nguyen: ");
		scanf("%d", &i);
		if(i> 10 || i< 1) {
			printf("nhap so vuuot qua nguong cho phep");
			return 0; 
		} 
	} while (i> 10 || i< 1);
	printf("Bang cuu chuong cua %d\n", i);
	for (n = 1; n <= 10; n++) {
		printf("%d x %d = %d\n", i,n,i*n);
	}
	return 0; 
} 

    
