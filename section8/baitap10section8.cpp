#include <stdio.h>
int main(){
	int n; 
	int dem = 0;
	printf("--NHAP GIA TRI CHO MANG--\n");
	do{
		printf("Moi ban nhap vao so phan tu cua mang: ");
		if(scanf("%d", &n) != 1 || n <= 0){
			printf("Loi nhap lieu.");
			int c;
			while((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		int c;
		while((c = getchar()) != '\n' && c != EOF);
	} while (n <= 0);
	
	int a[n];
	for(int i = 0; i < n; i++){
		do{
			printf("Moi ban nhap vao gia tri a[%d]: ", i);
			if (scanf("%d", &a[i]) != 1){
				printf("Loi nhap lieu");
				int c;
				while((c = getchar()) != '\n' && c != EOF);
				continue;
			}  
			int c;
			while((c = getchar()) != '\n' && c != EOF);
			break; 
		} while (1);
	}
	
	printf("--CAC PHAN TU LA SO NGUYEN TO TRONG MANG LA--\n");

	for(int i = 0; i < n; i++){
		int num = a[i];
	        int SNT = 1; 
	        if (num <= 1){ 
	            SNT = 0;  
	        } else {
	            for (int j = 2; j * j <= num; j++){
	                if (num % j == 0){ 
	                    SNT = 0; 
	                    break; 
	                }
	            }
	        }
		if (SNT == 1){ 
			printf ("a[%d] = %d\n", i, a[i]);
			dem++;
		}
	}
	
	if (dem == 0){
		printf ("\nKhong co so nguyen to trong mang.\n");
	} else {
		printf ("\nCo tong %d so nguyen to trong mang.\n", dem);
	}
	
	return 0;
	
}

