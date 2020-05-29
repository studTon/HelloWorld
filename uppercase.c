#include <stdio.h>
#define size 31
main() {
	int i;
	char str[size];
	
	printf("Type a string: ");
	gets(str);
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}
	}
	printf("Uppercase string: ");
	puts(str);
}
