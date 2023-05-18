#include<stdio.h>
int findMaxInthreeNumber(int num1,int num2,int num3){
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2>num1 && num2>num3)
    {
        return num2;
    }else{
        return num3;
    }
    
}

int main(){
    int number1,number2,number3;
    printf("Enter the Numbers:= ");
    scanf("%d %d %d",&number1,&number2,&number3);

    int max = findMaxInthreeNumber(number1,number2,number3);
    printf("The max of three number is =: %d\n",max);

}