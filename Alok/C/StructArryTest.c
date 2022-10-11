
#include <stdio.h>
struct  Company
{
int empno;
short age;
double sal;
};
int main()
{

typedef struct Company Vista;
Vista Emp[3];

int count=0;
for(count=0;count<3;count++)
{
printf("Entewr Empno / Age /Sal for no :%d\n",count+1);
scanf("%d %hd %lf",&Emp[count].empno,&Emp[count].age,&Emp[count].sal);
}

for(count=0;count<3;count++)
{
printf("Employee %d is %hd years and has salary %lf\n",Emp[count].empno,Emp[count].age,Emp[count].sal);
}
return 0;
}
