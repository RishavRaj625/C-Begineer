#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=2;
    for(int i=0;i<7;i++){
        int count = 0;
        if(arr[i]>x){
            count++;
            printf("%d ",arr[i]);
        }
       // printf("%d ",arr[i]);
    }
    return 0;
}