#include <stdio.h>
int main ()
{

	int n,i,j,k;			// declaration
	printf("Enter no of Row:\n");   // display
	scanf("%d",&n);                 // input by user
	for(i=1;i<=n;i++)               // for-loop for no of rows
	{  
	 	for(j=1;j<=i;j++)       // for-loop for decrement of columb    
			{
		printf("+");
				for(k=1;k<=j;k++)
				{
				printf("*");
				}
						}
					}
			}
		printf("\n");            // space after each row prints
	}
	return 0;
}
