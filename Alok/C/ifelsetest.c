
#include <stdio.h>

int main (void)
{
int gift = 50;
short age =0;
float amount= 0;
printf("Enter age: \n");
scanf("%hd",&age);

	if(age==16)

	{
	gift= 70;
	printf("Gift Amount = %.2f\n",amount=age*gift);
	}
	else if(age==18)
	{
	gift= 75;
	printf("Gift Amount = %.2f\n",amount=age*gift);
	}
	else if(age==21)
	{
	gift= 85;
	printf("Gift Amount = %.2f\n",amount=age*gift);
	}
	else if(age==50)
	{
	gift= 100;
	printf("Gift Amount = %.2f\n",amount=age*gift);
	}
	else
	{	
	printf("Gift Amount = %.2f\n",amount=age*gift);
	}
	puts("Thank You");
}
