<<<<<<< HEAD
#include<stdio.h>
int main(){
int arr[10];
int n;
printf("enter the number of elements in array \n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter element %d : \n",i+1);
    scanf("%d",&arr[i]);
}
int x;
printf("enter element you want to search\n");
scanf("%d",&x);
for(int i=0;i<n;i++){
    if(arr[i]==x)
    printf("the element is found at %d\n",i);
    
}
    return 0;
=======
#include<stdio.h>
int main(){
int arr[10];
int n;
printf("enter the number of elements in array \n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter element %d : \n",i+1);
    scanf("%d",&arr[i]);
}
int x;
printf("enter element you want to search\n");
scanf("%d",&x);
for(int i=0;i<n;i++){
    if(arr[i]==x)
    printf("the element is found at %d\n",i);
    
}
    return 0;
>>>>>>> f624b51 (first commit)
}