// WAP for DFA that accept language starting with aa and end with bb

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#include "lib/DFA.h"

#define STRING_STARTING "aa"
#define STRING_ENDING "bb"
#define ACCEPTED_LANGUAGE "ab"

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

    if(res ==1 ) res = DFAEndingString(STRING_ENDING, input);
    
    if (res == 0) printf("The string doesnot start with %s and end with %s and is not accepted", STRING_STARTING, STRING_ENDING);
    else if (res == 1) printf("The string starts with %s and ends with %s and is accepted", STRING_STARTING, STRING_ENDING);
    else printf("Some error!! Debug the code hehe");

    return 0;
}
