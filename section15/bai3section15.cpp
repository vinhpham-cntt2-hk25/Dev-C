#include <stdio.h>
#include <stdlib.h>

int effect(int a, int b){
    return abs(a-b);
}
int product(int a,int b) {
    return a * b;
}

int main (){
    int x, y;
	printf("Nhap hai so nguyen :");
	scanf("%d %d", &x, &y);
	printf("difference (between) two numbers");
	printf("Product of two numbers: %d\n", product (x,y));
	return 0;
}
