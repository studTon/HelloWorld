#include<stdio.h>
int main(){
	int num, i, div;
	char option = 1;
	num = 1;
	printf("PRIME LIST UNTIL 1000\n\n");
	do{
		do{
			i = 0;
			div = 1;
			while(div <= num){
				if(num % div == 0)
					i++;
				div++;
			}
			if(i == 2)
				printf("PRIME:%5d\n", num);
			num++;
		}while(num <= 1000);
		printf("Quit?: "); //The exit is bugged.
		scanf("%c", &option);
	}while(option == '1');
	return 0;
}

