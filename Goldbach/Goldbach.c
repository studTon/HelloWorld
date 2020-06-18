//Conjectura de Goldbach
#include <stdio.h>
main(){
	int p = 2, q = 2, num, soma;
	int cont1, cont2;
	int div1, div2;
	num = 4;
	while(num <= 100){
		if(num % 2 == 0){
			cont1 = 0; div1 = 1;
			while(div1 <= p){
				if(p % div1 == 0)
					cont1++;
				div1++;
			}
			if(cont1 == 2){
				cont2 = 0; div2 = 1;
				while(div2 <= q){
					if(q % div2 == 0)
						cont2++;
					div2++;
				}
				if(cont2 == 2){
					soma = p + q;
					if(soma == num){
						printf("%d + %d = %d\n", p, q, num);
					}
					else
						p++;
				}
				else
					q++;
			}
			else
				p++;
		}
		else
			num++;
	num++;
	}
}
