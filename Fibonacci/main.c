#include<stdio.h>
main(){
	int N, num, numA, numB, i, op;
	do{
		puts("Type how many numbers must appear.");
		scanf("%d", &N);
		numA=1;//First number of the sequence
		numB=0;//predecessor
		i=0;//counter
			while(i<N){
				printf("%d\n", numA);
				//numbers sequence
				num=numA+numB;
				numB=numA;
				numA=num;
				i++;
			}
		puts("Do you want to continue?(0)Exit|(1)Continue");
		scanf("%d", &op);
	}while(op!=0);
}
