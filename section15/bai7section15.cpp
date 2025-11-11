#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2; 

        if (arr[mid] == x)
            return mid; 

        else if (arr[mid] < x)
            left = mid + 1; 

        else
            right = mid - 1; 
    }

    return -1; 
}

int main() {
    int arr[100], n, i, x, result;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang (da duoc sap xep tang dan):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    result = binarySearch(arr, n, x);

    if (result != -1)
        printf("Tim thay %d tai chi so %d\n", x, result);
    else
        printf("Khong tim thay %d trong mang\n", x);

    return 0;
}
