   
#include <stdio.h>

int main() {
	float number_1,number_2,result; 
	int choose; 
	printf("Enter the first number: ");
	scanf("%f", &number_1);
	printf("Enter the second number: ");
	scanf("%f", &number_2);
	printf("1. Sum of two number\n");
	printf("2. difference of two numbers\n");
	printf("3. Product of two numbers\n");
	printf("4. Quotient of two numbers\n");
	printf("5. Exit\n");
	printf("Please select in order: ");
	scanf("%d", &choose);
	do {
	 switch(choose){
	 	case 1:
		  result = number_1 + number_2;
		  printf("Sum of two number: %.2f\n", result);
		  break; 
		case 2:
		  result = number_1 - number_2;
		  printf("difference of two numbers: %.2f\n", result);
		  break;
		case 3:
		  result = number_1 * number_2;
		  printf("Product of two numbers: %.2f\n", result);
		  break; 
		case 4:
		if(number_2 == 0){
			printf("error cannot didivde by zero\n");
		} else {
			result = number_1 / number_2;
			printf("Quotient of two numbers: %.2f\n", result);
		  break; 
		}
		case 5:
			printf("Exiting the program press enter again\n");
			break; 
		defualt:
		printf("Please re-enter\n");
	 }	if(choose != 5){
		printf("Other option: ");
		scanf("%d", &choose);
	}
	 } while (choose != 5);
	 return 0; 
	 
} 

