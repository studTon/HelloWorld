#include <stdio.h>
main()
{
    char option; //secondary option
    int i, op; //op->primary option
    double numAd, sum;//Adition factors
    double numSb1, numSb2;//Sub factors
    double product, numMt1, numMt2;//Multiplication factors
    double quocient, numDv1, numDv2;//Division factors
    do
    {
       puts("Type a number");
       scanf("%d", &op);
       switch (op)
       {
        case 1:{/*Addition*/
            sum=0

            do{
            puts("Type a number");
            scanf("%f", &numAd);

            sum+=numAd;

            puts("Do you want to continue?(y|n)");
            scanf("%c", &option);
           }while(option!='n');

           printf("Sum: %f\n", sum);
       }
       break;
        case 2:{/*Subtraction*/
            sum=0;

            do{
            puts("Type a number");
            scanf("%f", &numSb1);

            puts("Type a second number");
            scanf("%f",&numSb2);

            sum=numSb1-numSb2;

            puts("Do you want to continue?(y|n)");
            scanf("%c", &option);
           }while(option!='n');

           printf("Difference: %f\n", sum);
        }
        break;
        case 3:{/*Multiplication*/
            product=0;
            do
            {
            puts("Type a number.");
            scanf("%f", &numMt1);

            puts("Type a second number");
            scanf("%f", &numMt2);

            product=numMt1*numMt2;

            puts("Do you want to continue?(y|n)");
            scanf("%c", &option);
            } while (option!='n');

            printf("Product: %f\n", product);
        }
        break;
        case 4:{/*Division*/
            quocient=0;
            do{
            puts("Type a number.");
            scanf("%f", &numDv1);

            puts("Type a second number");
            scanf("%f", &numDv2);

            quocient=numDv1/numDv2;

            puts("Do you want to continue?(y|n)");
            scanf("%c", &option);
            }while(option!='n');

            printf("Quocient: %f\n", quocient);
        }
       }
    }while (op!=0);
    
}
