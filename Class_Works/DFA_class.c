#include<stdio.h>
#include<conio.h>   
#include<string.h>
#include<stdlib.h>

void main(){
    int currentState = 1,len;
    char a,b,str[100];
    printf("Enter your string : ");
    scanf("%s",&str);
    len = strlen(str);
    if(len==3){
        if(currentState == 1 && str[0]=='a'){
            currentState = 2;
        }
        if(currentState == 2 && str[1]=='b'){
            currentState = 3;
        }
        if(currentState == 3 && str[2]=='b'){
            currentState = 4;
            printf("String is accepted");
        } else {
            printf("String is rejected");
        }
    } else {
        printf("Enter correct string");
    }
    getch();
}
