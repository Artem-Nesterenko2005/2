#include <stdio.h>
#include <stdlib.h>


int main()
{
	int variable_1, variable_2 = 0;
	printf("Enter the first integer variable ");
	scanf_s("%d", &variable_1);
	printf("Enter the second integer variable ");
	scanf_s("%d", &variable_2);
	if (variable_1 > variable_2)
	{
	   	variable_1 = variable_1 + variable_2;
		variable_2 = variable_1 - variable_2;
		variable_1 = variable_1 - variable_2;
	}
	else
	{
		variable_2 = variable_1 + variable_2;
		variable_1 = variable_2 - variable_1;
		variable_2 = variable_2 - variable_1;
	}
	printf("First variable = %d\n", variable_1);
	printf("Second variable = %d", variable_2);
}


