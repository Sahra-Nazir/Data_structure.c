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
// selection sort in increasing order
  int index;
for(int i=0;i<n-1;i++){
     index=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[index]){
            index=j;
        }
    } 
        int temp=arr[i];
           arr[i]=arr[index];
           arr[index]=temp;
}
printf(" \n the new sorted array is \n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}

return 0;
}