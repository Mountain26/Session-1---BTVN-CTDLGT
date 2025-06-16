#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "olhel";
    int count[256] = {0};

    if (strlen(str1) != strlen(str2)) {
        printf("Hai chuoi da cho khong phai la hoan vi cua nhau");
        return 0;
    }

    for (int i = 0; i < strlen(str1); i++) {
        count[str1[i]]++;
    }

    for (int i = 0; i < strlen(str2); i++) {
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Hai chuoi da cho khong phai la hoan vi cua nhau");
            return 0;
        }
    }

    // Độ phức tạp thời gian của cách này là O(n)

    printf("Hai chuoi la hoan vi cua nhau");
    return 0;
}
