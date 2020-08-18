/*
This algorithm shows Goldbach's conjecture:
Goldbach's Conjecture describes an even number greater than 2 as sum
of two prime numbers.
*/
#include <stdio.h>
#include "checkPrime.h"
int main(void){

	int num;
	int i;//counter
	int j;//counter
	int prime1;
	int prime2;
	int aux;//Auxiliary
	
	printf("\n=======Goldbach's conjecture=======\n");
	
	num = 4;/*The loop must starts at 3 or 4 because the conjecture
	describes an even number greater than 2*/
	
	while(num <= 2000){
		
		if(num % 2 == 0){//Checks if it is an even number
			/*Checks which prime numbers expresses the even number*/
			
			for(aux = 2; aux < num; aux++){
				
				/*One function is used to determinate the prime 
				numbers*/
				
				//Conclusion if both values are prime numbers
				if(prime(num - aux) == 2 && prime(aux) == 2){
					prime1 = aux;
					prime2 = num - aux;
					break;
				}
				
			}
			//Output
			printf("%3d + %3d = %3d\n", prime1, prime2, num);
		}
		num++;	
	}
	
	return 0;
}
