#include<stdio.h>
main(){
	int num, i, j, k, termo1, termo2, div1, div2, naoachou;
	
	for(k=500;k<=1000;k++){
		num=k;
		if(num%2==0){
			for(i=1;i<num;i++){
				for(termo1=1, div1=0; termo1<i; termo1++){
					if(i%termo1==0){
						div1++
					}
					if(div1==1){
						for(j=1; j<num;j++){
							for(termo2=1, div2=0;termo2<j; termo2++){
								if(j%termo2==0){
									div2++;
								}
							}
						}
					}
				}
			}
		}
	}
