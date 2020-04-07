#include <stdio.h>
#define TAM 10
main(){
	int v[TAM], aux; // array and auxiliar
	int i, j; //counters
	for(i=0; i<TAM; i++){
		printf("Type a number.\n"); //Loop for sequence of numbers
		scanf("%d", &v[i]);
	}
	for(i=0; i<TAM; i++){
		for(j=i; j<TAM; j++){
			if(v[i]>v[j]){ //Main actions in the algorithm
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	for(i=0; i<TAM; i++){
		printf("NUM(%d): %d\n", i, v[i]);
	}
}
