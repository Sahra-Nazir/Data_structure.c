#include<stdio.h>
#include<string.h>
int main(){
     char string[100];
    int length=0;
    char *ptr;
    // traverse string using pointer
    printf("enter a string : ");
    scanf("%[^\n]",string);
    
    printf("you entered : ");
    ptr =string;
    while(*ptr !='\0'){
        printf("%c",*ptr);
        ptr ++;
    }
    // length of string using pointer
    ptr=string;
    while(*ptr !='\0'){
        length ++;
        ptr ++;
    }

    printf("\n length of string : %d \n ",length);

    // reverse of string using pointer
    char *q;
    ptr =string;
    q=string;
    q--;
    printf("reverse of string is \n");
    while(*q!=*ptr && q>=ptr){
        printf("%c",*q);
        q--;
    }
    
    return 0;
}