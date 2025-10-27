#include<stdio.h>
int main(){
int n;
printf("nhap so nguyen ");
scanf("%d",&n);
	if(n % 15 == 0){printf("so vua nhap chia het cho ca 3 va 5"); 
	} else if(n % 3 ==0){printf("so vua nhap chia het cho 3"); 
	}else if(n % 5 ==0) {printf("so vua nhap chia het cho 5"); 
	} 
return 0;
}

