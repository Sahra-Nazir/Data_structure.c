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
// increasing bubble sort
for (int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("the new sorted array is \n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
// decreasing bubble sort
for (int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf(" \n the new sorted array is \n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}