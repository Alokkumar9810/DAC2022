// FACTORIAL 

#include<stdio.h>
extern int factfunction(int);


int main(void)
	{
	int number;
	printf("Enter a Number:");
	scanf("%d",&number);

	printf("Factorial of a number is:%d \n",factfunction(number));
	return 0;
	}	

	
