/* method 1
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        int a =1;
        if(arr[i]%2!=0){
            a = 10*a+arr[i];
            printf("%d ",a);
        }
        else{
            a = 2*arr[i];
            printf("%d ",a);
        }
    }
    return 0;
} */  // Method 2
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        //int a =1;
        if(i%2!=0){
            arr[i] = arr[i] *2;
           // printf("%d ",arr[i]);
        }
        else{
           arr[i] = arr[i] + 10;
           // printf("%d ", arr[i]);
        }
    }
        for(int i=0;i<7;i++){
            printf("%d ",arr[i]);
    }
    return 0;
}