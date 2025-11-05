#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string : ");
    scanf("%[^\n]",str);

   // input a character to be inserted
    // char ch;
    // printf("enter the character to be inserted in a string : ");
    // scanf("%c",&ch);

    // length of string 
    int length=strlen(str);
     for(int i=length;i>=0;i--){
        str[i+1]=str[i];
    }

    str[0]='a';  //insertion at beginning
    printf("the new string %s",str);
    printf("\n");

    //insertion at end
    str[length+1]='u';
    printf("the string is %s",str);
    return 0;
}