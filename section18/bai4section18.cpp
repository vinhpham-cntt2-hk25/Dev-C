  #include <stdio.h>

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));   
    }
    printf("\n");
}

int main() {
    int a[] = {1, 3, 5, 7, 9};  
    int n = sizeof(a) / sizeof(a[0]);

    printArray(a, n);

    return 0;
}
