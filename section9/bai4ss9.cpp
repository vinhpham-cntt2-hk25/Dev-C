
#include <stdio.h>

int main() {
	int listnumber[100],n,sum=0;
	float average = 0;
	printf("Nhap so so phan tu mang: ");
	scanf("%d", &n);
	for (int i = 0;i<n;i++){
		printf("nhap phan tu %d: ",i);
		scanf("%d",&listnumber[i]);
		sum += listnumber[i];
	} 
		average = (float)sum / n;
	printf("gia tri trung binh cua cac phan tu trong mang[%d] = %.2f",n,average);
	return 0;
}

