#include<stdio.h>
int isEven(int n){
    if (n<=2){
        return 1;
    }else{
        int i = 2;
        int flag = 1;
        while (i<=n/2)
        {
            if (n%i==0){
                flag = 0;
                break;
            }else{
                i++;
            }
            
        }
        return flag;
        
    }
}


int main(){
    
    int n;
    scanf("%d",&n);
    int result =isEven(n);
    if (result)
    {
       printf("YES\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}