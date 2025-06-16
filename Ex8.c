#include <stdio.h>

void main(void) {
    int arr[] = {1, 1, 1, 4, 4, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;
    int maxItem;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxItem = arr[i];
        }
    }
    printf("Max count: %d\n", maxCount);
    printf("Max item: %d\n", maxItem);
}

// Độ phức tạp thời gian của bài toán này là: O(n2)