#include <stdio.h>
#define size 16
main() {
	int dec = 0, i;
	char rom[size];
	printf("Type the roman numeral: ");
	gets(rom);
	for(i=0;i < size;i++){
		switch(rom[i]){
			case 'i': 
				if(rom[i+1] == 'v'||rom[i+1] == 'x'||
					rom[i+1] == 'V'||rom[i+1] == 'X'){
					dec -= 1;
				}
				else{
				dec += 1;	
				} break;
			case 'I': if(rom[i+1] == 'v'||rom[i+1] == 'x'||
						rom[i+1] == 'V'||rom[i+1] == 'X'){
					dec -= 1;
				}
				else{
				dec += 1;	
				} ; break;
			case 'v': dec += 5; break;
			case 'V': dec += 5; break;
			case 'x': if(rom[i+1]=='l'||rom[i+1]=='c'||
						rom[i+1]=='L'||rom[i+1]=='C'){
							dec -= 10;
						}
						else{
							dec += 10;
						};break;
			case 'X': if(rom[i+1]=='l'||rom[i+1]=='c'||
						rom[i+1]=='L'||rom[i+1]=='C'){
							dec -= 10;
						}
						else{
							dec += 10;
						};break;
			case 'l': dec += 50; break;
			case 'L': dec += 50; break;
			case 'c': if(rom[i+1]=='m'||rom[i+1]=='d'||
						rom[i+1]=='M'||rom[i+1]=='D'){
							dec -= 100;
					}
					else{
							dec += 100;
						}; break;
			case 'C': if(rom[i+1]=='m'||rom[i+1]=='d'||
						rom[i+1]=='M'||rom[i+1]=='D'){
							dec -= 100;
					}
					else{
							dec += 100;
						}; break;
			case 'd': dec += 500; break;
			case 'D': dec += 500; break;
			case 'm': dec += 1000; break;
			case 'M': dec += 1000; break;
		}
	}
	printf("Decimal number: %d\n", dec);
}
