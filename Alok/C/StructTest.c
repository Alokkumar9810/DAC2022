
#include <stdio.h>
struct  Company
{
int empno;
short age;
double sal;
}C1;
int main()
{
C1 Emp;
Emp.empno =101;
Emp.age =25;
Emp.sal=30000;
printf("Employee %d is %hd years and has salary %lf\n",Emp.empno,Emp.age,Emp.sal);
return 0;
}
