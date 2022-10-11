#include<stdio.h>
#include "finance.h"
int main()
{
double principle=1000;
float rate = 10.0;
int period=3;
double intrest=0;
intrest =GetIntrest(principle,rate,period);
printf("Calculated simple Int is: %lf\n",intrest);
printf("Calculated Compound Int is: %lf\n",GetCompoundIntrest(principle,rate,period));
return 0;
}

