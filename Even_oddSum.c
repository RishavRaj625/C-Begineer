#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<7;i++){
        if(i%2==0){
            evensum = evensum+ arr[i]; //evensum+=arr[i]
        }
        else{
            oddsum+=arr[i];
        }
    }
    int result;
    result = evensum-oddsum;
    printf("%d ",result);
    return 0;
}
/*
#include<stdio.h>
int main() {
int array1[3][3][3], i, j, k;
printf("\n Enter the elements of the matrix");
printf("\n ******************************");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
for(k=0;k<2;k++)
{
printf("\n array[%d][ %d][ %d] = ", i, j, k);
scanf("%d", &array1[i][j][k]);
}
printf("\n The matrix is : ");
printf("\n ****");
for(i=0;i<2;i++)
{ printf("\n\n");
for(j=0;j<2;j++)
{
printf("\n");
for(k=0;k<2;k++)
printf("\t array[%d][ %d][ %d] = %d", i, j,k,array1[i][j][k]);
}
} 
} 
*/