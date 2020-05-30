#include <stdio.h>
#define max 6
main(){
	int matrix[max][max];
	int i, j;
	int scalar;
	
	for(i = 0; i < max; i++){
		for(j = 0; j < max; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Type any scalar value: ");
	scanf("%d", &scalar);
	for(i = 0; i < max; i++){
		for(j = 0; j < max; j++){
			matriz[i][j] *= scalar; //The multiplication
			printf("6%d ", matrix[i][j]); //Shows all the matrix
		}
		printf("\n");
	}
}
