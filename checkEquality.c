#include <stdio.h>

/**
 *description: A program that accepts two integers and checks if they are aqual
 *eg: accepts 1 and 1 and compares if they are equal
 *return 0
 */

int main()
{
int number;
int number2;

printf("Enter an integer: ");
scanf("%d",&number);

printf("Enter another integer: ");
scanf("%d",&number2);

if(number==number2)
{
printf("Number1 and Number2 are equal");
}
else{
printf("Number1 and Number2 are not equal");
}
return 0;
}
