#include <stdio.h>


void ham(int n){
	if (n > 10)printf("abc");
	else printf("dit me may");
}
int main(){
	int n;
	scanf("%d", &n);
	ham(n);
	
}