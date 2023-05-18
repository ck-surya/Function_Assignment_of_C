#include <stdio.h>
int getUnique(int* arr, int unq_arr[], int l, int *unq_len)
{
    for (int i = 0; i < l; i++)
    {
        int flag = 1;
        for (int j = 0; i < l; i++)
        {
            if (arr[i] == unq_arr[j])
            {
                flag = 0;
                (*unq_len)--;
                break;
            }
        }
        if (flag)
        {
            unq_arr[i] = arr[i];
        }
    }
}

int main()
{
    int n;
    printf("Enter the Length of Array =: ");
    scanf("%d", &n);
    int arr[n];
    int un_len = n;
    int uniq[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    getUnique(arr,uniq,n,&un_len);
    for (int i = 0; i < un_len; i++)
    {
        printf("%d ",uniq[i]);
    }
    printf("\n");
    return 0;
}