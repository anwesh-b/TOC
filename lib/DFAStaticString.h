// Checks acceptance of DFA for a static ACCEPTED_STRING

int dfaStaticString(char *ACCEPTED_STRING, char *ACCEPTED_LANGUAGE, char *input){
    
    int currentState = 0, supportedLen = strlen(ACCEPTED_STRING);
    
    if(strlen(input) != supportedLen) {
        printf("There is error in input length!!!");
        return 0;
    }

    // // Check the input with ACCEPTED_LANGUAGE
    // // Todo: Update with Regex
    for(int i = 0; i < supportedLen; i++){
        int checkFlag = 0;
        for (int j = 0; j < strlen(ACCEPTED_LANGUAGE); j++){
            if(input[i] == ACCEPTED_LANGUAGE[j]) {checkFlag = 1;}
        }
        if (checkFlag == 0) {
            printf("\nEnter correct language!!");
            return 0;
        }
    }

    // //Main Logic
    for (int i=0; i<supportedLen; i++){
        if (input[i] ==  ACCEPTED_STRING[i])  currentState++;
        else  break;
    }
    
    // //Checking
    if(currentState!=supportedLen) return 0;

    return 1;
}
