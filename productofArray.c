#include<stdio.h>
int main(){
    int arr[5] = {3,4,5,6,7};
    int product = 1;
    for(int i=0;i<5;i++){
        product = product * arr[i];
    }
    printf("product of array is : %d",product);
    return 0;
}