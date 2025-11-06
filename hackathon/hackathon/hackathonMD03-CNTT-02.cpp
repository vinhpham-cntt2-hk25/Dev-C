#include <Stdio.h>
#define MAX 100

int main (){
	int i,n,choice,arr[MAX],size,sum=0,valueUpdate,indexAdd,indexUpdate;
	float avg;
	int flag=0;
            while(1){
            printf("+-------------------Menu---------------------+ \n");	
    		printf("1. Nhap so luong phan tu va gia tri tung phan tu cho mang \n");	
   			printf("2. In ra gia tri cac phan tu trong mang \n");
    		printf("3. In cac so la so chinh phuong co trong mang \n");
    		printf("4. Tinh va in gia tri trung binh cua cac phan tu trong mang \n");
   			printf("5. Them moi mot phan tu vao cuoi mang \n");
    		printf("6. Xoa phan tu lai mot vi tri cu the (nguoi dung nhap) \n");
    		printf("7. Sap xep mang theo vi tri giam dan ");
    		printf("8. Tim kiem va hien thi vi tri cua 1 phan tu \n");
    		printf("9. In ra cac phan tu chi xuat hien 1 lan trong mang \n");
    		printf("10. Sap xep mang theo thu tu nguoc lai \n");
    		printf("11. Thoat chuong trinh \n");
    		printf("Moi ban lua chon \n");
    		scanf("%d",&choice);
    		switch(choice){
    			case 1:{
								printf("Moi ban nhap so phan tu: ");
				scanf("%d", &size);
				if(size > 100){
					printf("Vuot qua kich thuoc toi da 100!"); 
					return 0; 
				} 
				for(int i=0;i<size;i++){
					printf("Moi ban nhap gia tri thu %d: ",i);
					scanf("%d",&arr[i]);
			} flag = 1; 
				break;
			}
			case 2:{
					if(flag==0){
					printf("Ban chua nhap mang. Vui long quay lai buoc 1!\n"); 
				    }else{
				    printf("Mang la: ");
					for(int i=0;i<size;i++){
					printf("%d ",arr[i]); 
					} printf("\n"); 
				break;
			}
    		case 3:{
				break;
			}
    		    case 4:{
					if(flag==0){
					printf("Ban chua nhap mang. Vui long quay lai buoc 1!\n"); 
				} else {
				for(int i=0;i<size;i++){
					sum += arr[i];
				} printf("Tong cac phan tu trong mang la = %d\n",sum);
			}
    		case 5: {
				    if(flag==0){
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
			case 6:
			if(flag==0){
					printf("Ban chua nhap mang. Vui long quay lai buoc 1!\n"); 
				} else {
					int update,value;
					printf("Nhap vi tri muon cap nhat gia tri: ");
					scanf("%d",&update);
					if(update<0||update>MAX){
						printf("vi tri khong hop le!"); 
						return 0; 
					} 
					printf("Nhap gia tri muon cap nhat: ");
					scanf("%d",&value);
				 arr[update] = value; 
				 printf("Mang sau khi cap nhat: ");
				 for(int i=0;i<size;i++){
				 	printf("%d",arr[i]); 
				 } 
				}
				break;	  
		} if(choice !=10){
			printf("Moi ban nhap lua chon: ");
			scanf("%d",&choice); 
		}
		  }			case 7: {
			if(flag==0){
					printf("Ban chua nhap mang. Vui long quay lai buoc 1!\n"); 
				} else {
					int copy;
					for(int i=0;i<size-1;i--){
						for(int j=0;j<size-1-i;j--){
							if(arr[j]>arr[j+1]){
								copy = arr[j];
								arr[j] = arr[j-1];
								arr[j-1]=copy; 
							} 
						} 
					} 
					printf("mang sau khi sap xep giam dan la: ");
					for(int i=0;i<size;i++){
						printf("%d \n",arr[i]); 
					} 
				} 
					break;
				}
				    case 8: {			
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
		    case 11:
				printf("Thoat chuong trinh");
				break;
			default:
				printf("Lua chon khong hop le!");	 
		}  
	} while(choice!=10);
	return 0;
}
