/*#include<stdio.h>
int main(){
    int arr[8]={2,4,6,7,9,12,15,25};
    for(int i=2,j=4;i<=j;i++,j--){ //for whole reverse i=0,j=7; 
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<=7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    
}*/

/*#include<stdio.h>
int main(){
    int arr[8];
    int m,n;
    printf("Enter the value of m and n in range of 1 to 8 : ");
    scanf("%d%d",&m,&n);
    for(int i=0;i<8;i++){
        int a= i+1;
        printf("Enter %d Number : ",a);
        scanf("%d",&arr[i]);
    }
    for(int j=m,k=n;j<=k;j++,k--){
        int temp = arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
    }
    for(int i=0;i<8 ;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/

#include<stdio.h>
void reverse(int arr[],int a, int b){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int arr[8]={55,85,95,92,96,89,88,78};
    reverse(arr,1,5);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}