#include <stdio.h>

/**
 * description: a C program to find the largest of three numbers
 * written by: Charlotte Wellington
 * return: 0
 */
int main()
{
  int number6;
  int number7;
  int number8;
  printf("Enter your first number: ");
  scanf("%d",&number6);
  printf("Enter your second number: ");
  scanf("%d",&number7);
  printf("Enter your third number: ");
  scanf("%d",&number8);
     if(number6 > number7 && number6 > number8)
      {
	printf("The first number is the largest");
      }
     else if(number7 > number6 && number7 > number8){
       printf("The second number is the largest");
     }
     else
     {
       printf("The third number is the largest");
     }
 return 0;
}
