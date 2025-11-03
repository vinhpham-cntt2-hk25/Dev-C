#include <stdio.h>
int main(){
	const int n = 4; 
	int a[n][n] = {
		
		{4, 4, 4, 4} ,
		{4, 4, 4, 4} ,
		{4, 4, 4, 4} ,
		{4, 4, 4, 4} 
	};
	printf ("---MANG DA KHI BAO LA---\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf ("%5d", a[i][j]); 
		} 
		printf ("\n"); 
	} 
	 
	int Sum; 
	int four; 
	for(int i = 0; i < n; i++){
		four =  a[i][i];		
		Sum += four;
	} 
	
	printf("---CAC PHAN TU TREN DUONG CHEO VA TONG CUA CAC PHAN TU---\n");
	printf ("Cac phan tu nam trên duong cheo la: \n") ;
	
	for(int i = 0; i < n; i++){
		printf ("%5d", a[i][i]);
	}
	printf ("\n") ;
	printf 	("\nTong cua cac phan tu nam tren duong cheo la: %d", Sum);
	
	return 0; 
	
} 
