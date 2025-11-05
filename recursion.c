#include<stdio.h>
void rec(int n){
    if(n==0)
    return;
    printf("bismilla ");
    return rec(n-1);
}
int main(){
    int n;
    printf("enter recursiv number :");
    scanf("%d",&n);
    rec(n);
    return 0;
}