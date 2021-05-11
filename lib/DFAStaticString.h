// Checks acceptance of DFA for a static ACCEPTED_STRING

int dfaStaticString(char *ACCEPTED_STRING, char *input){
    
    int currentState = 0, supportedLen = strlen(ACCEPTED_STRING);
    
    if(strlen(input) != supportedLen) {
        printf("There is error in input length!!!");
        return 0;
    }

    //Main Logic
    for (int i=0; i<supportedLen; i++){
        if (input[i] ==  ACCEPTED_STRING[i])  currentState++;
        else  break;
    }
    
    //Checking
    if(currentState!=supportedLen) return 0;

    return 1;
}
