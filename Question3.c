#include<stdio.h>

int main(){
	int a, b, c, dis;
	printf("To solve the quadratic quation: ax² + bx + c = 0\n");
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	
	dis = (b*b)-(4*a*c);
	
	if (dis>0){
		printf("\nTwo real roots");
	} else if (dis<0){
		printf("\nImaginary roots");
	} else {
		printf("\nOne real root");
	}
	
	return 0;
}
