#include <stdio.h>
#include <math.h>

main() {
    int n;
    printf("Nhap so n: ");
	int i=1; 
	double S=0;
    scanf("%d", &n);
    while(i<=n){
    	S += 1.00/i;
    	i++;
	}
    printf("%.3lf", S);
}
