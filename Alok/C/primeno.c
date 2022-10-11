//PRIME NUMBER

#include <stdio.h>
int main(void)
{
int number,count=0,i;
puts("Enter a Number");
scanf("%d",&number);

for(i=1;i<=number;++i)
{
	if(number%i==0)
	{
		++count;
	}
}

	if(count<=2)
	{
	puts("Number is Prime");
	}

	else 
	{
		puts("Number is non prime");
	}
}
	
