
#include "calculations.h"
#include "codes.h"
#include "getUserInfo.h"

int main(){
	char* operation = NULL;
	float n1 = 0;
	float n2 = 0;
	float result = 0.0;

	if (!getUserInfo(&n1, &n2, &operation)){
		return ERROR_CODE;
	}
	if(makeCalculations(n1, n2, operation, &result)){
		printf("Result is %f\n", result);
	}
	else{
		return ERROR_CODE;
	}

	return SUCCESS_CODE;
}
