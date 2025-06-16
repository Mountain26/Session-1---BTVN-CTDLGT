#include <stdio.h>

int main() {
    int tong1 = 0;
    int n = 10;
    for (int i = 1;i <= n;i++) {
        tong1 += i;
    }
    printf("%d\n",tong1);
    printf("Do phuc tap thoi gian cua cach tinh 1 la: O(n)\n");
    int tong2 = n * ( n + 1 ) / 2;
    printf("%d\n",tong2);
    printf("Do phuc tap thoi gian cua cach tinh 2 la: O(1)\n");
}