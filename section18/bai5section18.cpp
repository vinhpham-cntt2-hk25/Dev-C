#include <stdio.h>

void updateElement(int arr[], int pos, int newValue) {
    arr[pos] = newValue;   
}

// Hàm in m?ng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {10, 20, 30, 40, 50};  
    int n = sizeof(a) / sizeof(a[0]);

    updateElement(a, 2, 99);
    printArray(a, n);

    return 0;
}
