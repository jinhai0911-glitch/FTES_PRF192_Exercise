#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    printf("Nhap vao so n :");
    scanf("%lld", &n);
    long long sodem = 0;
    for (long long i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            sodem++;
			if(i%(n/i)==0){
			sodem++; // ước i 
        }
    }
}
    printf("%lld\n", sodem);
    return 0;
}