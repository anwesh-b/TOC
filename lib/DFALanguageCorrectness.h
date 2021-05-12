// Checks if a language is correct or not

int DFALanguageIsCorrect(char *acceptedLanguage, char *input){
    for(int i = 0; i < strlen(input); i++){
        int checkFlag = 0;
        for (int j = 0; j < strlen(acceptedLanguage); j++){
            if(input[i] == acceptedLanguage[j]) {checkFlag = 1;}
        }
        if (checkFlag == 0) {
            return 0;
        }
    }
    return 1;
}
