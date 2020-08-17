/*
This algorithm shows Goldbach's conjecture:
Goldbach's Conjecture describes an even number greater than 2 as sum
of two prime numbers.
*/
#include <stdio.h>

int main(void){

	int num;
	int i;//counter
	int j;//counter
	int prime1;
	int prime2;
	int div1;//Divisor 1
	int div2;//Divisor 2
	int aux;//Auxiliary
	int key;//Key number
	
	printf("\n=======Goldbach's conjecture=======\n");
	
	num = 4;/*It must starts at 3 or 4 because the conjecture
	describes an even number greater than 2*/
	while(num <= 1000){
		if(num % 2 == 0){//Checks if it is an even number
			/*Checks which prime numbers expresses the even number*/
			for(aux = 2; aux < num; aux++){
				
				key = num - aux;
				/*Determinates division by one and the number(key)
				itself(prime number concept)*/
				div1 = 1;
				i = 0;
				while(div1 <= key){
					if(key % div1 == 0)
						i++;//Counting how many times occurs a exact division
						
					div1++;
				}
				/*Determinates division by one and the number(aux)
				itself(prime number concept)*/
				div2 = 1;
				j = 0;
				while(div2 <= aux){
					if(aux % div2 == 0)
						j++;//Counting how many times occurs a exact division
						
					div2++;
				}
				//Conclusion if both aux and key are prime numbers
				if(i == 2 && j == 2){
					prime1 = aux;
					prime2 = key;
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
