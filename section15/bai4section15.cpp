      
#include <stdio.h>

int sum(int arr[],int size) { 
	int result =0; 
	for(int i=0;i<size;i++){
		result += arr[i]; 
	} 
		return result; 
}
int main() {
	int arr[100],size;
	int result; 
	printf("nhap so phan tu: ");
	scanf("%d",&size);
	for(int i=0;i,i<size;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]); 
	} 
	result = sum(arr,size);
	printf("Tong tat ca cac phan tu trong mang la %d",result);
	return 0; 
} 

    
