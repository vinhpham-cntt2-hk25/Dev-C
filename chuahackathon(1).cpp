#include <stdio.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

int main (){
    int i,n,choice,arr[MAX],size,sum=0,valueUpdate,indexAdd,indexUpdate,min,max;
    float avg;
    int flag=0;
    while(1){
	    printf("+______________________________MENU________________________________+ \n");
    	printf("1. Nhap so phan tu va gia tri cua mang \n");
    	printf("2. In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1,arr[1])=5.. \n");
    	printf("3. Tim gia tri nho nhat va lon nhat trong mang: \n");
    	printf("4. In ra tong cua tat ca cac phan tu : \n");
    	printf("5. Them mot phan tu vao cuoi mang, phan tu moi them vao mang phai do nguoi dung nhap vao : \n");
    	printf("6. Xoa phan tu tai mot vi tri cu the(nguoi dung nap tri) : \n");
    	printf("7. Sap xep mang theo thu tu tang dan : \n");
    	printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong :\n");
    	printf("9. In ra toan bo so nguyen to trong mang :\n");
    	printf("10. Sap xep mang theo thu tu tang dan :\n");
    	printf("11. Thoat chuong trinh \n");
    	printf("______________________________________________________________________ \n");
    	scanf("%d", &choice);
	        switch(choice){
			    case 1: {
                	       printf("nhap do dai mang: ");
				scanf("%d",&n);
				printf("nhap gia tri trong mang:");
				for(i = 0;i < n;i++){
					printf("arr[%d] = ",i);
					scanf("%d",&arr[i]);
				} printf("\n");
				    break;
			    case 2:{
			    	   if(flag==0){
			    	   printf("Ban chua nhap mang. Vui long quay lai buoc 1!n");
			    	   }else{
			    	   printf("Mang la :");
			    	   for(int i = 0;i<size;i++){
					   printf("%d", arr[i]);	
					   } printf("\n");
			    	}	
				    break;
				}
				case 3:{
                    for(i = 1;i < n; i++){	
					    if (min > arr[i]) {
					    	min = arr[i];
					    }	
					}
					printf("so nho nhat trong mang la : %d",min);
				    break;
				}
				case 4:{
					if(flag==0){
					  printf("Ban chua nhap mang. Vui long quay lai buoc 1!\n");
					}else{
					for(int i=0;i<size;i++){
						sum += arr[i];
					}printf("Tong cac phan tu trong mang la = %d\n");
					}
					break;
					}
				case 5:{
					if (flag==0){
				    	printf("Ban chua nhap mang. Vui long quay lai buoc 1!\n"); 
					} else {
					int dele;
						printf("Nhap vi tri muon xoa: ");
						scanf("%d", &dele);
					if(dele<0||dele>=size){
						printf("vi tri khong hop le!");
					return 0; 
				}
					for(int i=dele;i<size-1;i++){
						arr[i] = arr[i+1]; 
				} size--;
					printf("Mang sau khi them: \n");
					for(int i=0;i<size;i++){
						printf("%d \n",arr[i]); 
				}
			}
				    break;
				}
				case 6:{
					int pos;
                printf("Nhap vi tri can xoa (tu 0 den %d): ", n - 1);
                if (scanf("%d", &pos) != 1 || pos < 0 || pos >= n) {
                    printf("Loi: Vi tri khong hop le.\n");
                    while (getchar() != '\n');
                    break;
                }
                for (i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Da xoa phan tu tai vi tri %d. So phan tu moi: %d\n", pos, n);
                	break;
				}
				case 8:{			   		
			if(flag==0){
					printf("Ban chua nhap mang. Vui long quay lai buoc 1!\n"); 
				} else {
					int x,eror=0; 
					printf("Nhap phan tu can tim: ");
					scanf("%d",&x);
					for(int i=0;i<size;i++){
						if(arr[i]==x){
							printf("Tim thay %d tai vi tri %d",x,i);
							eror = 1;
							break; 
						} 
					}
					if(eror==0)
					printf("khong tim thay"); 
			}
						break;
					}
				case 9:{
				    break;
				}
				case 11:{
					printf("Thoat chuong trinh");
					break;
				default:
				   printf("lua chon khong hop le");
				}
			}
		}
	}while(choice!=11);
    return 0;
}
