
#include <stdio.h>
#include "libconvert.h"

int main(){
        char *input = NULL;

        printf("Please, enter your text: \n");
        scanf("%ms", &input);

	if (input){
        	toLower(input);
        	printf("\nYour text in lower case: \n%s\n", input);
	}

	return 0;
}

