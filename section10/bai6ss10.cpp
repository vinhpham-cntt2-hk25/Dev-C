#include <stdio.h>
#include <stdbool.h> 

#define MAX_SIZE 100

void optimizedBubbleSort(int arr[], int n) {
    int i, j, temp;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped = true;
            }
        }

        if (swapped == false) {
            printf("\n-> Phat hien mang da sap xep. Ket thuc som o lan duyet thu %d.\n", i + 1);
            break; 
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;

    printf("Nhap so luong phan tu cua mang (n): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Loi nhap lieu.\n");
        return 1;
    }

    int arr[MAX_SIZE]; 
    printf("Nhap %d phan tu cua mang:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Loi nhap lieu.\n");
            return 1;
        }
    }

    printf("Mang ban dau: ");
    printArray(arr, n);
    optimizedBubbleSort(arr, n);

    printf("Mang sau khi sap xep theo thu tu tang dan:\n");
    printf("-> ");
    printArray(arr, n);

    return 0;
}
