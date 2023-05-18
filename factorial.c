#include<stdio.h>

int getFactorial(int n){
    if (n==1)
    {
        return 1;
    }
    return n*getFactorial(n-1);
    
}



int main(){
    int n;
    scanf("%d",&n);
    int result = getFactorial(n);
    printf("The Factorial is:= %d\n",result);
    return 0;
}