#include<stdio.h>
int main(){
    int arr[5]= {4,6,8,9,12};
    //arr[1]=625;
    //printf("%d \n",arr[1]);
    //printf("%d",arr[2]);
    int a=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
        a = a+arr[i];
        //printf("%d ",arr[i]);
       // printf("%d",a);
        }
    }
    printf("%d",a);
    return 0;
}