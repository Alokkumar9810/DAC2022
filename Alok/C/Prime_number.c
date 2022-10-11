
#include <stdio.h>
int main()
{
int n,i,count=0;
printf("Enter a Number\n");
scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;

	}
	if(count==2)
	printf("prime\n");
	
	else
	printf("Non Prime\n");

return 0;
}
