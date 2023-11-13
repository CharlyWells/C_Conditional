#include <stdio.h>
/**
 *description- a program to check if a number entered is even or odd
 *written by: Charlotte Wellington
 *return 0
 */

int main()
{
 int number3;
 printf("Type a number: ");
 scanf("%d",&number3);
 if(number3 % 2 == 0){
     printf("%d is an even integer",number3);
 }
 else{
     printf("%d is an odd integer",number3); 
 }
 return 0;
}
