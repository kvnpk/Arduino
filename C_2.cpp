#include <stdio.h>
int base, height;
float triangle;
main(){
	printf("Enter Base: ");
	scanf("%d", &base);
	printf("Enter Height: ");
	scanf("%d", &height);
	triangle = 0.5*base*height;
	printf("Base = %d\nHeight = %d\nTriangle Area = %.3f", base,height,triangle);
}
