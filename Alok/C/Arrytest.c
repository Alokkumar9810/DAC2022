#include <stdio.h>
int main()
{
int marks[5];
double total;
int count;
double avg;

for(count=0;count<5;count++)
{
printf("Enter marks for subject:%d\n",count+1);
scanf("%d",&marks[count]);
}
total=0;
for(count=0;count<5;count++)
{
total=total+marks[count];
}
avg =total/5;
printf("Average marks of student is: %lf\n",avg);
return 0;
}
