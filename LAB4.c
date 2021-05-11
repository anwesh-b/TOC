// WAP for DFA that accept String ending with 11

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#include "lib/DFA.h"

#define STRING_ENDING "11"
#define ACCEPTED_LANGUAGE "01"

int main(){
    int res;
    char input[100];

    printf("Enter the string : ");
    scanf("%s",&input);

    res = DFAEndingString(STRING_ENDING, ACCEPTED_LANGUAGE, input);

    if (res == 0) printf("The string doesnot end with %s and is not accepted",STRING_ENDING);
    else if (res == 1) printf("The string ends with %s and is accepted",STRING_ENDING);
    else if (res == 2) printf("Enter correct language!!");
    else printf("Some error!! Debug the code hehe");

    return 0;
}