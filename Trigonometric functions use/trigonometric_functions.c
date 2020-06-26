//Trigonometric functions
#include <stdio.h>
#include <math.h>
#define Pi 3.14159265358979323846264338327
int main(){
	float num;
	
	puts("Type a real number between [-1, +1]: ");
	scanf("%f", &num);
	printf("Pi * %.3f is the arcsine\n", asinf(num)/Pi);
	printf("Pi * %.3f is the arctan\n", atanf(num)/Pi);
	printf("%.3f is the cosine\n", cosf(num));
	return 0;
}
