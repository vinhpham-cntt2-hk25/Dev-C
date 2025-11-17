#include <stdio.h>
#include <stdlib.h>

double average(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);  
    }
    return (double)sum / n;
}

int main() {
    int n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int)); 
    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", arr + i); 
    }

    double avg = average(arr, n);
    printf("Gia tri trung binh cua mang: %.2lf\n", avg);

    free(arr); 
    return 0;
}
