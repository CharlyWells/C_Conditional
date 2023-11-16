#include <stdio.h>
/**
 * description: a C program to accept the height of a person in centimeters and categorize the person according to their height.
 * written by: Charlotte Wellington
 * return 0
 */

int main()
{
int height;
printf("What is your height in centimeters?");
scanf("%d",&height);

if(height<148)
{
  printf("You are a dwarf");
}
else
{
  printf("You have a normal height");
}
return 0;
}
