// Checks acceptance of DFA for string ending with ACCEPTED_STRING

int DFAEndingString(char *stringEnding, char *input){
    
    int currentState = 0;

    for (int i=0; i<strlen(input); i++){
        if( input[i] == stringEnding[currentState] ){
            currentState++;
        } else if(currentState > 0) {
            for(int j=0; j <= currentState; j++){
                if(input[i - j] != stringEnding[j] ){
                    currentState = 0;
                    break;
                }
            }
        }
    }

    if(currentState == strlen(stringEnding)) return 1;
    else return 0;
}
