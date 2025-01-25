/*Method 1
#include<stdio.h>

int main(){
    int arr[10] = {33,145,157,46,37,98,24,8,100,95};
    int max = arr[0]; //(always applicable) 
    int secondmax = arr[0];
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
     for(int i=0;i<10;i++){
        if(arr[i]!=max && secondmax<arr[i]){
            secondmax = arr[i];
        }
    }
    printf("second maximum array is : %d",secondmax);
    return 0;
}*/
#include<stdio.h>

int main(){
    int arr[10] = {33,45,157,46,37,98,24,8,100,95};
    int max = arr[0]; //(always applicable) 
    int secondmax = arr[0];
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            secondmax = max;
            max = arr[i];
        }
        else if(secondmax<arr[i]){//else if(secondmax<arr[i] && max != arr[i])  agar same input tab ye condition use kar sakte hai
            secondmax = arr[i];
        }
    }
    printf("second maximum array is : %d",secondmax);
    return 0;
}