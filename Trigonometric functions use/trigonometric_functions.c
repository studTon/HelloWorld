//Trigonometric functions
#include <stdio.h>
#include <math.h>
#define Pi 3.14159
int main(){
	float num;
	
	puts("Type a real number between [-1, +1]: ");
	scanf("%f", &num);
	printf("Pi * %f is the result\n", asinf(num)/Pi);
	return 0;
}
