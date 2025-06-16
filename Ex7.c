#include <stdio.h>

int main() {
    int arr[] = {15, 15, 2006, 15, 1, 2005, 12, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    } if (count > 0) {
        printf("Mang co phan tu trung lap");
    }
}
// Cách trên độ phức tạp thời gian là O(n2)

int main2() {
    int arr[] = {15, 15, 2006, 15, 1, 2005, 12, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[1001] = {0};
    int duplicate = 0;
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > 1) {
            duplicate = 1;
            break;
        }
    }
    if (duplicate == 1) {
        printf("Mang co phan tu trung lap");
    }
}

// Ở main2 thì độ phức tạp thời gian là O(n)