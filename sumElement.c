#include<stdio.h>

int sumOfElemnts(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
    
int main(){
    int n;
    printf("Enter the length of Array:= ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result = sumOfElemnts(arr,n);
    printf("The sum of all elements is := %d\n",result);

    return 0;
}