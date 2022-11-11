
#include <ctype.h>

void toUpper(char *input){
        for (int i = 0; input[i] != '\0'; i++){
                input[i] = toupper(input[i]);
        }
}

void toLower(char *input){
        for (int i = 0; input[i] != '\0'; i++){
                input[i] = tolower(input[i]);
        }
}


