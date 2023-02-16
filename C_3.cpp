#include <stdio.h>
int width, height;
float rectangle;
main(){
	printf("Enter Widht: ");
	scanf("%d", &width);
	printf("Enter Height: ");
	scanf("%d", &height);
	rectangle = width*height;
	printf("Width = %d\nHeight = %d\nTriangle Area = %.3f", width,height,rectangle);
}
