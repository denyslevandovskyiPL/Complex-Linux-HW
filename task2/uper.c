
#include <stdio.h>
#include "libconvert.h"

int main(){
	char *input = NULL;

	printf("Please, enter your text: \n");
	scanf("%ms", &input);
	
	if (input){
		toUpper(input);
		printf("\nYour text in upper text: \n%s\n", input);
	}
 
	return 0;		
}
