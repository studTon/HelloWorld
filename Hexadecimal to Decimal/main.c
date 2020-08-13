/*
This is a program that receives hexadecimal string and convert to deci-
mal.
*/

#include <stdio.h>

int main(void){
	
	const max = 6;//<<You may change input size by changing this const
	char hex[max];
	int i, j;
	int decval = 0; //decval means "decimal value"
	int exp; //exp means "exponentiation"
	int counter = 0;
	/*
	===Pay attention about int exp variable===
	In this case exponentiation is a sum of n times the base 16
	is multiplied by itself.
	*/
	printf("-------HEXADECIMAL TO DECIMAL CONVERTER-------\n");
	
	printf("Type the hexadecimal.(%d spaces)\n", max);
	gets(hex);
	
	//Conversion from lowercase to uppercase letters
	for(i = 0; i < max; i++){
		
		if(hex[i] >= 97 && hex[i] <= 102){
			switch(hex[i]){
				case 'a': hex[i] = 'A'; break;
				case 'b': hex[i] = 'B'; break;
				case 'c': hex[i] = 'C'; break;
				case 'd': hex[i] = 'D'; break;
				case 'e': hex[i] = 'E'; break;
				case 'f': hex[i] = 'F'; break;
			}
		}	
			
	}
	//Counting hexadecimal string length
	for(i = 0; i < max; i++){
		if(hex[i] >= 48 && hex[i] <= 57 || hex[i] >= 65 && hex[i] <= 70)
		   counter++;
	}
	//Processing message
	printf("-----\"Verifying %s\"-----\n", hex);
	if(counter == 1)
		printf("-----\"%d character\"-----\n", counter);
	else
		printf("-----\"%d characters\"-----\n", counter);
	//Alphanumeric characters analysis
	for(i = 0; i < max; i++, counter--) {
		//First case: 16 raised to 0
		if(counter == 1){
			switch(hex[i]){
				case '0': decval += 0; break;
				case '1': decval += 1; break;
				case '2': decval += 2; break;
				case '3': decval += 3; break;
				case '4': decval += 4; break;
				case '5': decval += 5; break;
				case '6': decval += 6; break;
				case '7': decval += 7; break;
				case '8': decval += 8; break;
				case '9': decval += 9; break;
				case 'A': decval += 10; break;
				case 'B': decval += 11; break;
				case 'C': decval += 12; break;
				case 'D': decval += 13; break;
				case 'E': decval += 14; break;
				case 'F': decval += 15; break;
			}
		}
		//Second case: 16 raised to the first power
		else
		if(counter == 2){
			switch(hex[i]){
				case '0': decval += 0 * 16; break;
				case '1': decval += 1 * 16; break;
				case '2': decval += 2 * 16; break;
				case '3': decval += 3 * 16; break;
				case '4': decval += 4 * 16; break;
				case '5': decval += 5 * 16; break;
				case '6': decval += 6 * 16; break;
				case '7': decval += 7 * 16; break;
				case '8': decval += 8 * 16; break;
				case '9': decval += 9 * 16; break;
				case 'A': decval += 10 * 16; break;
				case 'B': decval += 11 * 16; break;
				case 'C': decval += 12 * 16; break;
				case 'D': decval += 13 * 16; break;
				case 'E': decval += 14 * 16; break;
				case 'F': decval += 15 * 16; break;
			}
		}
		//16 raised to the n-th power, starting by 2
		else{
			exp = 16;
			for(j = 2; j < counter; j++){
				exp *= 16;
			}
			switch(hex[i]){
				case '0': decval += 0 * exp; break;
				case '1': decval += 1 * exp; break;
				case '2': decval += 2 * exp; break;
				case '3': decval += 3 * exp; break;
				case '4': decval += 4 * exp; break;
				case '5': decval += 5 * exp; break;
				case '6': decval += 6 * exp; break;
				case '7': decval += 7 * exp; break;
				case '8': decval += 8 * exp; break;
				case '9': decval += 9 * exp; break;
				case 'A': decval += 10 * exp; break;
				case 'B': decval += 11 * exp; break;
				case 'C': decval += 12 * exp; break;
				case 'D': decval += 13 * exp; break;
				case 'E': decval += 14 * exp; break;
				case 'F': decval += 15 * exp; break;
			}
		}		
	}
	//Output	
	printf("Decimal value = %d\n", decval);
	return 0;
}
