 //Matrix multiplication
 int main(){
 	int matA[3][3], matB[3][3], matR[3][3];
 	int i, j, k;
 	//input for matrix A
 	for(i = 0; i < 3; i++){
 		for(j = 0; j < 3; j++){
 			scanf("%d", &matA[i][j]);
		}
	}
	//input for matrix B
 	for(i = 0; i < 3; i++){
 		for(j = 0; j < 3; j++){
 			scanf("%d", &matB[i][j]);
		}
	}
	// A * B input at matrix R
 	for(i = 0; i < 3; i++){
 		for(j = 0; j < 3; j++){
 			matR[i][j] = 0;
 			for(k = 0; k < 3; k++){
 				matR[i][j] += (matA[i][k]*matB[k][j]);
			}
		}
	}
 	//Loop showing the results
 	for(i = 0; i < 3; i++){
 		for(j = 0; j < 3; j++){
 			printf("%4d", matR[i][j]);
			}
		}
	}
 	return 0;
 }
