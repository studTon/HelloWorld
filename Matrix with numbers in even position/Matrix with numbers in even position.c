/*Matriz com números em posição par - Matrix with numbers 
at even position*/
#include <stdio.h>
int main(){
	int n[5][5];
	int l, c;
	printf("Matriz base: \n");
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			n[l][c] = 2*l+3*c+1;
			printf("%3d", n[l][c]);
		}
		printf("\n");
	}
	printf("\nMatriz com numeros em posicao par(linha + coluna): \n");
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			if((l + c) % 2 != 0)
				n[l][c] = 0;
			printf("%3d", n[l][c]);
		}
		printf("\n");
	}
	return 0;
}
