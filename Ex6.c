#include <stdio.h>

int main() {
    int arr[] = {15, 15, 2006, 15, 1, 2005, 12, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;
    int maxItem;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    printf("Max count: %d\n", maxCount);
}

// Độ phức tạp của thời gian là O(n2)