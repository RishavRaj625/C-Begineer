#include<stdio.h>
void fun(int x[]){
    int temp = x[0];
    x[0] = x[1];
    x[1]=temp;
    return;
}
int main(){
 int arr[2]={5,9};
 
 printf("%d %d",arr[0],arr[1]);
 fun(arr);
 printf("\n%d %d",arr[0],arr[1]);
return 0;
}