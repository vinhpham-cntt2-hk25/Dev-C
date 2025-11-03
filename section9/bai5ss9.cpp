#include <stdio.h>

int main() {
	int listnumber[100],n,count1=0,count2=0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&listnumber[i]);
	} for(int i = 0;i<n;i++){
		if(listnumber[i] % 2 ==0)
			count1++;
		else 
			count2++;
} 
printf("\nCac so chan = ");
    for(int i = 0; i < n; i++) {
        if(listnumber[i] % 2 == 0)
            printf("%d ", listnumber[i]);
    }

    printf("\nCac so le = ");
    for(int i = 0; i < n; i++) {
        if(listnumber[i] % 2 != 0)
            printf("%d ", listnumber[i]);
    }
 	printf("Tong so chan = %d \n",count1);
 	printf("Tong so le = %d \n",count2);
 	return 0;
}

       

