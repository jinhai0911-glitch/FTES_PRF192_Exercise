#include <stdio.h>

// Kiểm tra số thuận nghịch
int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

// Kiểm tra có chứa chữ số 6
int has6(int n) {
    while (n > 0) {
        if (n % 10 == 6) return 1;
        n /= 10;
    }
    return 0;
}

// Kiểm tra tổng chữ số có chữ số cuối là 8
int sumLastDigitIs8(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 10 == 8;
}

// Kiểm tra "số đẹp"
int isBeautiful(int n) {
    return isPalindrome(n) && has6(n) && sumLastDigitIs8(n);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int first = 1;
    for (int i = a; i <= b; i++) {
        if (isBeautiful(i)) {
            if (!first) printf(" ");
            printf("%d", i);
            first = 0;
        }
    }

    printf("\n"); // thêm xuống dòng để rõ output
    return 0;
}