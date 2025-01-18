#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
 //we can take extra variable also//int a = i+1;//printf("enter the %d number : ",a);
        printf("Enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
        printf("\n");
    }
    //for reverse the number
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}