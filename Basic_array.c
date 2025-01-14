#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        int a = i+1;
        printf("Enter the number %d : ",a); //printf("Enter the number %d",i+1);
        scanf("%d",&arr[i]);
    }
    //printf("the array is %d ",arr[2]);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}