#include <stdio.h>
#define size 31
main() {
	int i;
	char str[size];
	
	printf("Type a string: ");
	gets(str);
	for(i = 0; str[i] != '\0'; i++){
		//using ASCII code I transformed lowercase letters in uppercase.
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}
	}
	printf("Uppercase string: ");
	puts(str);
}
