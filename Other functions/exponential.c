//Exponential function
#include <stdio.h>
#include <math.h>
int main(){
	float num;
	float x;
	float powered;
	
	scanf("%f", &num);
	printf("Result of e^%.1f = %.3f\n", num, expf(num)); //e^x
	printf("Type the power: ");
	scanf("%f", &x);
	printf("Result of %.2f^%.2f= %.3f\n", num, x, pow(num, x));
	powered = pow(num, x);
	//square root
	printf("The square root of %.2f = %.3f\n", powered, sqrt(powered));
	return 0;
}
