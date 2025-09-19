<<<<<<< HEAD
// insertion at anywhere
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
for(int i=0;i<size;i++){
printf(" %d", arr[i]);
}
printf("\n enter the index where you  want to insert \n");
int index;
scanf("%d",&index);
int z;
printf("\n enter element you want to insert at index %d \n",index);
scanf("%d",&z);
for(int i=size;i>index;i--){
    arr[i]=arr[i-1];
}
arr[index]=z;
size ++;
printf("the new array is : ");
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}

    return 0;
}
=======
// insertion at anywhere
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
for(int i=0;i<size;i++){
printf(" %d", arr[i]);
}
printf("\n enter the index where you  want to insert \n");
int index;
scanf("%d",&index);
int z;
printf("\n enter element you want to insert at index %d \n",index);
scanf("%d",&z);
for(int i=size;i>index;i--){
    arr[i]=arr[i-1];
}
arr[index]=z;
size ++;
printf("the new array is : ");
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}

    return 0;
}
>>>>>>> f624b51 (first commit)
