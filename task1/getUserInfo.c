
#include "codes.h"
#include "getUserInfo.h"
#include <stdio.h>
#include <string.h>

const int OPERATIONS_ARRAY_SIZE = 6;
const char OPERATIONS[6][5] = {"+", "-", "*", "/", "!", "sqrt"};

int readInteger(float *number){
        if(scanf("%f", number) != 1){
                printf("Please, enter a number\n");
                return ERROR_CODE;
        }
        return SUCCESS_CODE;
}



int getUserInfo(float* n1, float* n2, char** operation)
{
	int status = ERROR_CODE;

	printf("Please, choose an operation: sum(+), substract(-), multiply(*), division(/), root(sqrt), factorial(!):\n");
        scanf("%ms", operation);
	
	if (!(*operation)){
		return ERROR_CODE;
	}
        for (int i = 0; i < OPERATIONS_ARRAY_SIZE; i++)
        {
                if (strcmp(*operation, OPERATIONS[i]) == 0)
                {
                        status = SUCCESS_CODE;
                        break;
                }
        }
        if (status != SUCCESS_CODE)
        {
                printf("Your sign is wrong. Try again\n");
                return ERROR_CODE;
        }

        printf("Enter number: \n");

        if (!readInteger(n1)){
                return ERROR_CODE;
        }

        if (strcmp(*operation, "sqrt") != 0 && strcmp(*operation, "!") != 0){
                printf("Enter second number: \n");

                if (!readInteger(n2))
                {
                        return ERROR_CODE;
                }
        }
	return SUCCESS_CODE;
}
