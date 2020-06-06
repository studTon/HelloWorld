#include <stdio.h>
int main(){
	char inKey = 0;
	char op = 1; //option key
	int a, b, c;
	int area;
	do{	printf("What do you want to calculate?\n");
		printf("Square area(A)|Rectangle Area(B)|\nTriangle Area(C)|Circle Area(D)|?");
		scanf("%d", &inKey);
		switch(inKey){
			case 'A':{};break;
			case 'a':{};break;
			case 'B':{};break;
			case 'c':{};break;
			case 'D':{};break;
		}
		scanf("%d", &op);
		printf("Do you want to exit?(Y-yes|N-no)\n");
		scanf("%d", &op);
		switch(op){
			case 'Y': op = 0; break;
			case 'y': op = 0; break;
			case 'N': op = 1; break;
			case 'n': op = 1; break;
			default: printf("Invalid command\n");
		}
	}while(op != 0);
	return 10;
}