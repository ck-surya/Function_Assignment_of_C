#include<stdio.h>

int isPerfectNumber(int n){
    int sum = 1;
    int i = 2;
    while (i<=n/2)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        i++;
        
    }
    return sum;
    

}


int main(){
    int n;
    scanf("%d",&n);
    int result = isPerfectNumber(n);
    if (result == n)
    {
       printf("YES\n");
    }else{
        printf("NO\n");
    }
    

    return 0;
}