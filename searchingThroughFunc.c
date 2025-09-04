#include<stdio.h>
void search(int arr[],int size){
   int x;
   printf("enter number to be searched\n");
   scanf("%d",&x);
   int found=0;
   int index;
   for(int i=0;i<size;i++){
    if(arr[i]==x){
    found=1;
    index=i+1;
    }
   }
   if(found==1)
   printf("the element is found at %d",index );
   else
   printf("not found");
}
int main(){
int arr[10];
int n;
printf("enter the number of elements in array \n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter element %d : \n",i+1);
    scanf("%d",&arr[i]);
}
    int size=sizeof(arr)/sizeof(arr[0]);
    search(arr,size);
return 0;
}