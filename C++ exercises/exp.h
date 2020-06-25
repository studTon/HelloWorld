//Exponentiation function
float square(float num){
	float result = num * num;
	return result;
}

float cube(float num){
	float result = num * num * num;
	return result;
}

float npow(float num, int n){
	int i = 1;
	float result = num;
	while(i < n) {result = result * num;}
	return result;
}
