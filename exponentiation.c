#include<stdio.h>
main(){
	//Exponentiation by any number
	int result, number, i;
	int exp;
	puts("Type a number.");
	scanf("%d", &number);
	result=number;
	puts("Type a expoent");
	scanf("%d", &exp);
	for(i=1;i<exp;i++){
		result*=number;
	}
	printf("Result: %d\n", result);
}
