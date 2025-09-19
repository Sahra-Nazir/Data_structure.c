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

// deletion at the beginning

for(int i=0;i<size-1;i++){
    arr[i]=arr[i+1];
}
size--;
printf("\n the new array is : ");
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}

// deletion at the end
size--;
printf(" \n array after deleting last element \n ");
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}
return 0;
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

// deletion at the beginning

for(int i=0;i<size-1;i++){
    arr[i]=arr[i+1];
}
size--;
printf("\n the new array is : ");
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}

// deletion at the end
size--;
printf(" \n array after deleting last element \n ");
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}
return 0;
>>>>>>> f624b51 (first commit)
}