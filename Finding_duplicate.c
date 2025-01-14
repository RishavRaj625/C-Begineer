#include<stdio.h>
int main(){
    int arr[8] = {95,98,99,100,105,98,85,95};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                printf("%d is duplicate element \n",arr[i]);
                break;
            }
        }
    }
    return 0;
} 