#include <stdio.h>
/**
 * description -  a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
 * written by: Charlotte Wellington
 * return 0
 */

int main()
{
int m;
printf("Type an integer: ");
scanf("%d",&m);

if(m>0)
{
  printf("The value of n = 1");
}
else if(m == 0)
{
  printf("The value of n = 0");
}
else
{
  printf("The value of n = -1");
}
return 0;
}
