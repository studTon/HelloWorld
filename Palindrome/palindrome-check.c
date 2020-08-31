#include <stdio.h>

int main(void){
	
	int const size = 4; //<-- Enter the exact word size here
	char str[size];
	int i, j, start, end;
	int k = 0;
	
	printf("===Palindrome check===\n");
	
	printf("Type a string with exact %d characters\n", size);
	gets(str);
	//lowercase to uppercase conversion only to read lowercase as uppercase
	for(i = 0; i <= size; i++)
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	
	start = 0;
	end = size;
	//Check characters equal characters
	for(i = 0, j = 1; i < size/2; i++, j++)
		if(str[start + i] == str[end - j])
			k++;
	//Output message
	if(k == size/2)
		printf("Palindrome.\n");
	else
		printf("It\'s not a palindrome.\n");
		
	return 0;
}
