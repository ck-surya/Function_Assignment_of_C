#include <stdio.h>

int checkNumberRange(int n,int start,int stop){
    if (start<=n<=stop)
    {
        return 1;
    }else{
        return 0;
    }
    
}

int main()
{
    int n,uppar,lower;

    printf("Enter the number for the Check:= ");
    scanf("%d",&n);

    printf("Enter the Uppar value:= ");
    scanf("%d",&uppar);

    printf("Enter the Lower value:= ");
    scanf("%d",&lower);

    int  flag = checkNumberRange(n,lower,uppar);

    if (flag)
    {
        printf("Yes, Number is in side the Range...");
    }else{
        printf("No,Number is out of range!!!");
    }
    
}