
int DFAStartingString(char* stringStarting, char* input){

    for (int i=0; i<strlen(stringStarting); i++){
        if( input[i] != stringStarting[i]) return 0;
    }
    return 1;
}
