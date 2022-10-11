#include<stdio.h>
struct Company
{
short int empno;
short int age;
double sal;
double comm;
};
typedef struct Company Employee;
void PrintEmployee(Employee);
double GetGrossAnnualIncome(Employee);
void PrintEmployee(Employee e)
{
printf("======Printing Employee Details =======\n");
printf("Employee id:%hd\n",e.empno);
printf("Employee Age:%hd\n",e.age);
printf("Employee Sallary:%lf\n",e.sal);
printf("Employee Comm:%lf\n",e.comm);
printf("Gross Annual Income is:%lf\n",GetGrossAnnualIncome(e));
}

double GetGrossAnnualIncome(Employee e)
{
double GAIncome=0;
GAIncome= (e.sal+e.comm)*12;
return GAIncome;
}

int main()
{
Employee emp={101,23,10000,2000};
PrintEmployee(emp);
return 0;
}
