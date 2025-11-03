#include <stdio.h>
int main(){
	int a[] = {10, 20, 30, 40, 50};
	int Sum = 0; 
	float Average; 
	int n = sizeof(a) / sizeof(a[0]); 
	
	for (int i = 0; i < n; i++){
		Sum += a[i];
	} 
	
	Average = (float)Sum / n;
	
	printf ("--KET QUA TINH TOAN--\n");
	printf ("Mang da cho la: {10, 20, 30, 40, 50}\n");
	printf ("Tring binh cua cac phan tu trong mang la: %.2f", Average);
	
	return 0; 
} 
