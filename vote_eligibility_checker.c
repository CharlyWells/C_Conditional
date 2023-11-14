#include <stdio.h>
/**
 * description: A program to read the age of a candidate and determine whether he/she is eigble to vote
 * written by: Charlotte Wellington
 * return 0
 */

int main()
{
int age;
printf("What's your age?: ");
scanf("%d",&age);

if(age > 17)
{
  printf("You are eligible to vote");
}
else
{
  printf("You are not eligible to vote");
}
return 0;
}
