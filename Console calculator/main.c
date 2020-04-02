#include <stdio.h>
main()
{
    char option //secondary option
    int num, i, op;
    double numAd, sum=0;
    do
    {
       puts("Type the option.(0)Exit|(1)Addition|(2)Subtraction|(3)Multiplication|(4)Division");
       scanf("%d", &op);
       switch (op)
       {
       case 1:{
           do{puts("Type a number");
           scanf("%f", &numAd);
           sum+=numAd;
           puts("Do you want to continue.");
           scanf("%c", &option);
           }while(option!='n');

       }
           break;
       
       default:
           break;
       }
    } while (op!=0);
    
}
