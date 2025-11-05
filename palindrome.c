#include<stdio.h>
#include<string.h>
int main(){
     char string[100];
    char *p;
    char *q;
    int isPal=1;
    // traverse string using pointer
    printf("enter a string : ");
    scanf("%[^\n]",string);
   
    // reverse of string
    p=string;
    q=string;
    while(*q!='\0'){
        q++;
    }
    q--;
    while(p<q){
    if(*p ==*q){
        isPal=1;
        break;
    }
    else{
        isPal=0;
        break;
    }

    p++;
    q--;
    }
    if(isPal==1){
        printf(" the string is a palindrome\n");
    }
    else{
        printf("not a palindrome ");
    }
    
    
    return 0;
}