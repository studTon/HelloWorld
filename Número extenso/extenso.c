#include <stdio.h>
main(){
	int numero, cent, deze, unid;
	printf("Entre com o numero.\n");
	scanf("%d", &numero);
	cent = numero/100;
	deze = (numero%100)/10;
	unid = (numero%100)%10;
	/* Para os nomes que se repetem adotei um padrão.*/
	if((cent==0)&&(deze==0)){
		switch(unid){
		case 0 : printf("Zero.\n"); break;
		case 1 : printf("Um.\n"); break;
		case 2 : printf("Dois.\n"); break;
		case 3 : printf("Tres.\n"); break;
		case 4 : printf("Quatro.\n"); break;
		case 5 : printf("Cinco.\n"); break;
		case 6 : printf("Seis.\n"); break;
		case 7 : printf("Sete.\n"); break;
		case 8 : printf("Oito.\n"); break;
		case 9 : printf("Nove.\n"); break;
		}
	}
	if((cent==0)&&(deze!=0)){
		if(deze==1){
			switch(unid){
			case 0 : printf("Dez.\n"); break;
			case 1 : printf("Onze.\n"); break;
			case 2 : printf("Doze.\n"); break;
			case 3 : printf("Treze.\n"); break;
			case 4 : printf("Quatorze.\n"); break;
			case 5 : printf("Quinze.\n"); break;
			case 6 : printf("Dezesseis.\n"); break;
			case 7 : printf("Dezessete.\n"); break;
			case 8 : printf("Dezoito.\n"); break;
			case 9 : printf("Dezenove.\n"); break;
			}
		}
		if((deze==2)&&(unid==0)){
			printf("Vinte.\n");
		}
		if((deze==2)&&(unid!=0)){
			printf("Vinte");
			switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
		}
		if((deze==3)&&(unid==0)){
			printf("Trinta.\n");
		}
		if((deze==3)&&(unid!=0)){
			printf("Trinta");
			switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
		}
		if((deze==4)&&(unid==0)){
			printf("Quarenta.\n");
		}
		if((deze==4)&&(unid!=0)){
			printf("Quarenta");
			switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
		}
		if((deze==5)&&(unid==0)){
			printf("Cinquenta.\n");
		}
		if((deze==5)&&(unid!=0)){
			printf("Cinquenta");
			switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
		}
		if((deze==6)&&(unid==0)){
			printf("Sessenta.\n");
		}
		if((deze==6)&&(unid!=0)){
			printf("Sessenta");
			switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
		}
		if((deze==7)&&(unid==0)){
			printf("Setenta.\n");
		}
		if((deze==7)&&(unid!=0)){
			printf("Setenta");
			switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
		}
		if((deze==8)&&(unid==0)){
			printf("Oitenta.\n");
		}
		if((deze==8)&&(unid!=0)){
			printf("Oitenta");
			switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
		}
		if((deze==9)&&(unid==0)){
			printf("Noventa.\n");
		}
		if((deze==9)&&(unid!=0)){
			printf("Noventa");
			switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
		}
	}
	if(cent==1)
		if((deze==0)&&(unid==0))
			printf("Cem.\n");
		else{
			printf("Cento");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
	if(cent==2)
		if((deze==0)&&(unid==0))
			printf("Duzentos.\n");
		else{
			printf("Duzentos");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
	if(cent==3)
		if((deze==0)&&(unid==0))
			printf("Trezentos.\n");
		else{
			printf("Trezentos");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
	if(cent==4)
		if((deze==0)&&(unid==0))
			printf("Quatrocentos.\n");
		else{
			printf("Quatrocentos");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
	if(cent==5)
		if((deze==0)&&(unid==0))
			printf("Quinhentos.\n");
		else{
			printf("Quinhentos");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
	if(cent==6)
		if((deze==0)&&(unid==0))
			printf("Seiscentos.\n");
		else{
			printf("Seiscentos");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
	if(cent==7)
		if((deze==0)&&(unid==0))
			printf("Setecentos.\n");
		else{
			printf("Setecentos");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
	if(cent==8)
		if((deze==0)&&(unid==0))
			printf("Oitocentos.\n");
		else{
			printf("Oitocentos");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
	if(cent==9)
		if((deze==0)&&(unid==0))
			printf("Novecentos.\n");
		else{
			printf("Novecentos");
			if(deze==1)
				switch(unid){
				case 0 : printf(" e dez.\n"); break;
				case 1 : printf(" e onze.\n"); break;
				case 2 : printf(" e doze.\n"); break;
				case 3 : printf(" e treze.\n"); break;
				case 4 : printf(" e quatorze.\n"); break;
				case 5 : printf(" e quinze.\n"); break;
				case 6 : printf(" e dezesseis.\n"); break;
				case 7 : printf(" e dezessete.\n"); break;
				case 8 : printf(" e dezoito.\n"); break;
				case 9 : printf(" e dezenove.\n"); break;
				}
			else{
				switch(deze){
				case 2 : printf(" e vinte"); break;
				case 3 : printf(" e trinta"); break;
				case 4 : printf(" e quarenta"); break;
				case 5 : printf(" e cinquenta"); break;
				case 6 : printf(" e sessenta"); break;
				case 7 : printf(" e setenta"); break;
				case 8 : printf(" e oitenta"); break;
				case 9 : printf(" e noventa"); break;
				}
				switch(unid){
				case 1 : printf(" e um.\n"); break;
				case 2 : printf(" e dois.\n"); break;
				case 3 : printf(" e tres.\n"); break;
				case 4 : printf(" e quatro.\n"); break;
				case 5 : printf(" e cinco.\n"); break;
				case 6 : printf(" e seis.\n"); break;
				case 7 : printf(" e sete.\n"); break;
				case 8 : printf(" e oito.\n"); break;
				case 9 : printf(" e nove.\n"); break;
				}
			}
		}
}
