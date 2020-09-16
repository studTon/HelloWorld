#include <stdio.h>
int binaryNumber(int num, int size){
	int numBin;
	int i , j;          //"i" and "j" are counters.
	int Algarism[size];       //The decimal number
		//Conversion to binary
		Algarism[0] = num % 2;
		for(i = 1, j = 1; i < size; i++){
			Algarism[i] = 0;
			j *= 2;
			Algarism[i] = (num / j) % 2;
		}
		numBin=0;
		for(i = 0, j = 1; i < size; i++){
			numBin += Algarism[i] * j;
			j *= 10;
		}
		return numBin;
}

int main(void){
	int numberDecimal, quantity;
	
	printf("Type a decimal number\n");
	scanf("%d", &numberDecimal);
	
	printf("Type a quantity of bits\n");
	scanf("%d", &quantity);
	
	printf("Binary number is: %d\n", binaryNumber(numberDecimal, quantity));
	return 0;
}
