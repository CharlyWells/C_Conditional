#include <stdio.h>
/**
 *description- a program that checks whether a given number is positive or negative
 *written by: Charlotte Wellington
 *return 0
 */

int main()
{
int number4;
printf("Type a number: ");
scanf("%d",&number4);

if(number4 >= 0){
     printf("The number you typed is positive");
}	
else
{
    printf("The number you typed is negative");
}
 return 0;
}
