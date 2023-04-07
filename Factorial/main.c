/*
    This code was made for educational purpose only. Feel free to use it.
    Made by @studTon

    WARNING: main function don't have a error detector when receives keyboard input.
*/

#include <stdio.h>

void titleText(void)
{
    printf("\n************FACTORIAL************\n\n");
}

int factorial(int factoredNumber)
{
    return factoredNumber == 0 ? factoredNumber + 1 : factoredNumber * factorial(factoredNumber - 1);
}

int main(void)
{
    int number;
    
    titleText();

    printf("Type a integer number:");
    scanf("%d", &number);

    printf("The factorization is: %d\n", factorial(number));

}

