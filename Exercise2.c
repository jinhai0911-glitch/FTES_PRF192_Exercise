#include <stdio.h>

void swap(double *a, double *b){
	double c=*a;
	*a=*b;
	*b=c;
}
int main (){
	double a, b;
	scanf("%lf %lf", &a, &b);
	swap(&a,&b);
	printf("%.2lf %.2lf", a, b);
	return 0;
}