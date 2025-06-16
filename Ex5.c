#include <stdio.h>

int main() {
    int arr[] = {15, 7, 2006, 16, 1, 2005, 12, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) {
        int count = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count = 1;
                }
            }
        if (count == 0) {
            break;
        }
    }
    printf("\nMang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Độ phức tạp thời gian của bài này là 0(n2)
// Bubble sort duyệt qua mảng với vòng lặp lồng
