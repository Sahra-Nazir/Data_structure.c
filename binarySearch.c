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
int start=0;
int end=n-1;
int k;
printf("enter element to be searched \n");
scanf("%d",&k);
while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==k){
    printf(" found at %d",mid);
    break;
    }
    else if (arr[mid]<k){
        end=mid+1;
    printf("found at right %d \n",end);
    break;
    }
    else 
    {
        start=mid-1;
        printf("found at left %d",start);
        break;
    }
}
return 0;
}