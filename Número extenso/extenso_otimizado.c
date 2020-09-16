#include <stdio.h>
#include "numero_extenso.h"
int main(void){
	
	int num;
	//Input
	printf("Digite um numero entre 0 e 999: ");
	scanf("%d", &num);
	
	extenso(num);
	
	return 0;
}
