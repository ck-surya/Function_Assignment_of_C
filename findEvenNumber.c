#include <stdio.h>

int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter the length of Array:= ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int flag = isEven(arr[i]);
        if (flag){
            printf("%d ",arr[i]);
        }

    }
    printf("\n");


    return 0;
}