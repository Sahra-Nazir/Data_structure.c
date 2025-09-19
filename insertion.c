<<<<<<< HEAD
#include<stdio.h>
int main(){
int arr[10];
int size;
printf("enter size of array \n");
scanf("%d",&size);
for(int i=0;i<size;i++){
printf("enter element %d of array \n",i+1);
scanf("%d", &arr[i]);
}
printf("the given array is \n");
for(int i=0;i<size;i++)
printf(" %d", arr[i]);

// insertion at the beginning
printf("\n enter the element you want to insert at beginning \n");
int x;
scanf("%d",&x);
for(int i=size;i>=0;i--){
    arr[i]=arr[i-1];
}
arr[0]=x;
printf("the new array is : ");
for(int i=0;i<=size;i++){
    printf("%d",arr[i]);
}
// insertion at the end of array
int y;
printf("\n enter element you want to insert at end  \n");
scanf("%d",&y);
arr[size]=y;
size ++;
printf("the new array is\n");
for(int i=0;i<=size;i++){
printf(" %d ",arr[i]);
}
    return 0;
}
=======
#include<stdio.h>
int main(){
int arr[10];
int size;
printf("enter size of array \n");
scanf("%d",&size);
for(int i=0;i<size;i++){
printf("enter element %d of array \n",i+1);
scanf("%d", &arr[i]);
}
printf("the given array is \n");
for(int i=0;i<size;i++)
printf(" %d", arr[i]);

// insertion at the beginning
printf("\n enter the element you want to insert at beginning \n");
int x;
scanf("%d",&x);
for(int i=size;i>=0;i--){
    arr[i]=arr[i-1];
}
arr[0]=x;
printf("the new array is : ");
for(int i=0;i<=size;i++){
    printf("%d",arr[i]);
}
// insertion at the end of array
int y;
printf("\n enter element you want to insert at end  \n");
scanf("%d",&y);
arr[size]=y;
size ++;
printf("the new array is\n");
for(int i=0;i<=size;i++){
printf(" %d ",arr[i]);
}
    return 0;
}
>>>>>>> f624b51 (first commit)
