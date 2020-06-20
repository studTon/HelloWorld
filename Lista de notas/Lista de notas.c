//Algoritmo que armazena notas de 5 disciplinas
#include <stdio.h>
int main(){
	int notas[5][15];
	char disc[5];
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 15; j++){
			printf("Matricula %d|disc %d\n", j, i);
			scanf("%d", &notas[i][j]);
			if(notas[i][j] != (notas[i][j] >= 0 && 
			notas[i][j] <= 10)){
				break;
			}
				
		}
	}
	
	return 0;
}
