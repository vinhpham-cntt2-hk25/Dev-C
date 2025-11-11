#include <stdio.h> 
int totalDigits(int n){
    int sum = 0;
    int temp = n;
    if (temp < 0){
	   temp = -temp;
	}
	while (temp != 0){
	    sum += temp % 10;
	    temp /= temp;
	}
	return sum;
}
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("sum of digits %d: %d\n", num, totalDigits(num));
    
    return 0;
}
