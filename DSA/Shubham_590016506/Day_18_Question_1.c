#include <stdio.h>

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for(int j = i + 1; j < n; j++)
            if(arr[j] < arr[minIdx])
                minIdx = j;
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}