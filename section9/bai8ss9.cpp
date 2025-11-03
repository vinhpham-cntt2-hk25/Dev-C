#include <stdio.h> 
int main(){
	const int n = 4;
	int a[n][n] = {
	//0  1  2  3  4 
		{4, 4, 4, 4} , 
		{4, 4, 4, 4} , 
		{4, 4, 4, 4} , 
		{4, 4, 4, 4} 
	} ;
	
	printf ("---CAC PHAN TU TRONG MANG DA KHAI BAO LA---\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n;  j++){
			printf ("%5d", a[i][j]); 
		} 
		printf ("\n"); 
	} 
	
	int four = 0; 
	int Sum; 
	
	printf ("---CAC PHAN TU TREN DUONG CHEO PHU VA TONG CAC PHAN TU TREN DUONG CHEO PHU---\n") ;
	printf ("Cac phan tu nam tren duong cheo phu la: \n"); 
	for (int i = 0; i < n; i++){
		printf ("%5d", a[i][n - i -1]) ;
	} 
	
	for (int i = 0; i < n; i++){
		int j = n - 1 -i;
		int four = a[i][j]; 
		Sum += four;
	}
	
	printf ("\n"); 
	printf ("\nTong cua cac phan tu nam tren duong cheo phu la: %d", Sum) ;
	
} 
