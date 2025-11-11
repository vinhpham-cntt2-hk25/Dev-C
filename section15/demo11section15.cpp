#include <stdio.h>

int findTheFirstElement(int arr[], int n) {
    int count[1000] = {0}; 
    int i, minCount = n -1 , leastElement;
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (i = 0; i < n; i++) {
        if (count[arr[i]] < minCount) {
            minCount = count[arr[i]];
            leastElement = arr[i];
        }
    }

    return leastElement;
}

int main() {
    int arr[] = {2,2,1,2,1,2,1,1,};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findTheFirstElement(arr, n);

    printf("the element that appears at least: %d\n", result);
    return 0;
}
