// WAP for DFA that accept the string aababaa

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#include "lib/DFA.h"

#define ACCEPTED_STRING "aababaa"
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

    res = dfaStaticString(ACCEPTED_STRING, input);

    if(res == 0) printf("\nThe String is rejected");
    else if(res == 1) printf("\nThe String is accepted");
    else printf("\nThere is some error!!!");
    
    return 0;
}
