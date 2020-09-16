/*Transformar número inteiro entre 0 e 999 em número por extenso*/
void extenso(int num){
	//Fatoração dos algarismos
	int cent = num / 100;
	int deze = (num % 100) / 10;
	int unid = (num % 100) % 10;
	/*Nomes de cada casa do numeral*/
	if(cent >= 1 && cent <= 9){
		switch(cent){
			case 1: if(deze!=0||unid!=0){
						printf("Cento");
					}
					else{
						printf("Cem");
					}break;
			case 2: printf("Duzentos"); break;
			case 3: printf("Trezentos"); break;
			case 4: printf("Quatrocentos"); break;
			case 5: printf("Quinhentos"); break;
			case 6: printf("Seiscentos"); break;
			case 7: printf("Setecentos"); break;
			case 8: printf("Oitocentos"); break;
			case 9: printf("Novecentos"); break;
		}
	}
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
	if((cent==0)&&(deze!=0))
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
	if(cent>=0||cent<=9)
		switch(deze){
			case 1: if( cent > 0 && cent <= 9){
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
			}
			break;
			case 2: if(cent == 0)
						printf("Vinte");
					else
						printf(" e vinte");break;
			case 3: if(cent == 0)
						printf("Trinta");
					else
						printf(" e trinta");break;
			case 4: if(cent == 0)
						printf("Quarenta");
					else
						printf(" e quarenta");break;
			case 5: if(cent == 0)
						printf("Cinquenta");
					else
						printf(" e cinquenta");break;
			case 6: if(cent == 0)
						printf("Sessenta");
					else
						printf(" e sessenta");break;
			case 7: if(cent == 0)
						printf("Setenta");
					else
						printf(" e setenta");break;
			case 8: if(cent == 0)
						printf("Oitenta");
					else
						printf(" e oitenta");break;
			case 9: if(cent == 0)
						printf("Noventa");
					else
						printf(" e noventa");break;
		}
	if(deze > 1 || (cent > 1 && deze != 1)){
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
	if(cent >= 1 && cent <= 9 && deze == 0){
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

