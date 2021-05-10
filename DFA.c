#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define ACCEPTED_STRING "aaa"
#define ACCEPTED_LANGUAGE "ab"

void main(){
    int currentState = 0, supportedLen = strlen(ACCEPTED_STRING);
    char input[100];

    printf("Enter the string : ");
    scanf("%s",&input);
    
    if(strlen(input) != supportedLen) {
        printf("You entered wrong length!!!");
        return;
    }

    // Check the input with ACCEPTED_LANGUAGE
    // Todo: Update with Regex
    for(int i = 0; i < supportedLen; i++){
        int checkFlag = 0;
        for (int j = 0; j < strlen(ACCEPTED_LANGUAGE); j++){
            if(input[i] == ACCEPTED_LANGUAGE[j]) {checkFlag = 1;}
        }
        if (checkFlag == 0) {
            printf("Enter correct language");
            return;
        }
    }

    //Main Logic
    for (int i=0; i<supportedLen; i++){
        if (input[i] ==  ACCEPTED_STRING[i]){
            currentState++;
        }else{
            break;
        }
    }
    
    //Checking
    if(currentState!=supportedLen){
        printf("The string is rejected");
        return;
    }
    printf("The string is accepted");

    return;
}