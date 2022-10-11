#include <stdio.h>
int main()
{
int a=0, b=1, c=0 ,n,i;
printf("Enter n\n");
scanf("%d",&n);
printf("========================================\n");
for(i=0;i<n;i++)
{
printf("%d\n\n",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
