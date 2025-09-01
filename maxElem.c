#include <stdio.h>
void max_array(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<5;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("the maximum element is %d ",max);

}
int main(){
    int arr[5]={2,3,1,5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
     max_array(arr,size);
     
    return 0;
}


