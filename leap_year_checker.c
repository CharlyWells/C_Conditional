#include <stdio.h>
/**
 * description: The program checks if a given year is a leap year or not
 * written by: Charlotte Wellington
 * return 0
 */

int main()
{
int number5;
printf("Enter a year: ");
scanf("%d",&number5);
if(number5 % 400 == 0)
{
     printf("The year you typed is a leap year");
}
else if(number5 % 4 == 0)
{
     printf("The year you typed is a leap year");
}
else
{
     printf("The year you typed is not a leap year");
}
return 0;
}
