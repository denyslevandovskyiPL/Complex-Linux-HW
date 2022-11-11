
#include "calculations.h"
#include "codes.h"

float factorial(float num)
{       float fact = 1;
        for(int i = 1;i <= num; i++){
                fact = fact * i;
        }
        return fact;
}

int makeCalculations(float n1, float n2, char* operation, float *result)
{
        int status = SUCCESS_CODE;
        if (strcmp(operation, "sqrt") == 0){
                if (n1 < 0){
                        printf("Root can be count only for non negative numbers\n");
                        status = ERROR_CODE;
                }
                else
		{
                        *result = sqrt(n1);
		}
        }
        else{
                switch (operation[0]){
                        case '+':
                                *result = n1 + n2;
                                break;
                        case '-':
                                *result = n1 - n2;
                                break;
                        case '*':
                                *result = n1 * n2;
                                break;
                        case '/':
                                if (n2 == 0){
                                        printf("You can not divide by 0\n");
                                        status = ERROR_CODE;
                                }
                                else
                                        *result = n1 / n2;
                                break;
                        case '!':
                                if (n1 < 0)
                                {
                                        printf("Factorial can be count only for non negative numbers\n");
                                        status = ERROR_CODE;
                                }
                                else
                                        *result = factorial(n1);
                                break;
                        default:
                                break;
                }
        }
        return status;
}

