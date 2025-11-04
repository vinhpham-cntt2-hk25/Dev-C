#include <stdio.h>
#define MAX_SIZE 100

int binarySearch(int arr[], int n, int target) {
    int left = 0;         
    int right = n - 1;     
    int mid;
    while (left <= right) {

        mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            return mid; 
        } 
        
        else if (arr[mid] < target) {
            left = mid + 1; 
        } 
        else {
            right = mid - 1; 
        }
    }

    return -1;
}

int main() {
    int n, target, result;

    printf("Nhap so luong phan tu cua mang (n): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Loi nhap lieu.\n");
        return 1;
    }

    int arr[MAX_SIZE]; 
    printf("Nhap %d phan tu cua mang (DA SAP XEP TANG DAN):\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Loi nhap lieu.\n");
            return 1;
        }
    }

    printf("Nhap gia tri can tim (target): ");
    if (scanf("%d", &target) != 1) {
        printf("Loi nhap lieu.\n");
        return 1;
    }

    result = binarySearch(arr, n, target);

    printf("\nOutput:\n");
    if (result != -1) {
        printf("-> So %d ton tai o chi so: %d\n", target, result);
    } else {
        printf("-> Khong tim thay\n");
    }

    return 0;
}
