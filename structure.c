#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int salary;
        int age;
    };

     struct person first;
     
     first.salary=20;
     printf("%d",first.salary);
    return 0;
}