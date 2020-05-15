#include <stdio.h>
#define max 5
main(){
	int i, j;
	char hex[max];
	int pot, val, dec = 0;
	printf("Digite o valor hexadecimal.\n");
	gets(hex);
	for(i = 0; i != '\0'; i++){
		
		if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }
        else
		{
			hex[i] = 0;
		}
		dec += (val * pot);
	}
	printf("Decimal: %d\n", dec);
}
