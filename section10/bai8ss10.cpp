#include <stdio.h>
#define MAX_SIZE 100

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int binarySearch(int arr[], int n, int target) {
    int left = 0;       
    int right = n - 1;  
    int mid;          

    //     
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

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int n, target, result, i;

    printf("Nhap so luong phan tu cua mang (n): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Loi nhap lieu.\n");
        return 1;
    }

    int arr[MAX_SIZE]; 
    printf("Nhap %d phan tu cua mang CHUA SAP XEP:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Loi nhap lieu.\n");
            return 1;
        }
    }

    printf("Nhap phan tu can tim (target): ");
    if (scanf("%d", &target) != 1) {
        printf("Loi nhap lieu.\n");
        return 1;
    }

    bubbleSort(arr, n);

    printf("\nOutput:\n");
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Chi so cua phan tu can tim (so %d) trong mang da sap xep: %d\n", target, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}
