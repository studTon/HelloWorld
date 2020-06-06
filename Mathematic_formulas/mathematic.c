#include <stdio.h>
int main(){
	int op; //option key
	int a, b, c;
	int area;
	do{
		
		printf("Do you want to exit?(Y-yes|N-no)\n");
		scanf("%d", &op);
		switch(op){
			case 'Y': op = 0; break;
			case 'y': op = 0; break;
			case 'N': op = 1; break;
			case 'n': op = 1; break;
			default: printf("Invalid command\n");
		}
	}while(op!=0)
	return 0;
}