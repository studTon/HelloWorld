
//Function that checks if a number is prime number
int checkPrime(int num){
	int div;
	int i;
	div = 1;
	i = 0;
	while(div <= num){
		if(num % div == 0)
			i++;
		div++;
	}
	return i;
}
