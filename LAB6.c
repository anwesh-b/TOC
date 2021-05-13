// WAP for DFA that accept language starting with 00

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#include "lib/DFA.h"

#define STRING_STARTING "00"
#define ACCEPTED_LANGUAGE "01"

int main(){
    int res;
    char input[100];

    printf("Enter the string : ");
    scanf("%s",&input);

    if( !DFALanguageIsCorrect(ACCEPTED_LANGUAGE, input) ){
        printf("Enter correct language!!");
        return 0;
    }

    res = DFAStartingString(STRING_STARTING, input);

    if (res == 0) printf("The string doesnot start with %s and is not accepted",STRING_STARTING);
    else if (res == 1) printf("The string start with %s and is accepted",STRING_STARTING);
    else printf("Some error!! Debug the code hehe");

    return 0;
}
