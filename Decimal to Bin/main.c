#include <stdio.h>
#define size 10 //The size can be defined before the main code.
main(){
	int numD, numBin;
	int i , j, op;//"i" and "j" are counters. "op" is an option key.
	int Algarism[size];//All parts of the decimal number
	do{
		puts("Type a decimal number to be converted");
		scanf("%d", &numD);
		//Conversion to binary
		Algarism[0]=numD%2;
		for(i=1
		,j=1;i<size;i++){
			Algarism[i]=0;
			j*=2;
			Algarism[i]=(numD/j)%2;
		}
		numBin=0;
		for(i=0,j=1;i<size;i++){
			numBin+=Algarism[i]*j;
			j*=10;
		}
		printf("Binary: %d\n", numBin);
		puts("Do you want to continue?(0)Exit|(1)Continue");
		scanf("%d", &op);
	}while(op!=0);
	
	
}
