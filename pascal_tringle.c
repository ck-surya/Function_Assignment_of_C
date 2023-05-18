#include <stdio.h>

void Pascal_value(int n)
{
    int row[n];
    int i,j;

    for (i = 0; i < n; i++)
    {
        int col[n];
        
        col[0] = 1;
        col[i] = 1;
        
        for ( j = i-1;  j>0; j--)
        {
            col[j] = col[j]+col[j-1];
        }
        
        for ( j = 0; j <=i; j++)
        {
            row[j] = col[j];
            printf("%d",row[j]);
        }
        printf("\n");    
    }
}

int main()
{
    int n=5;
    Pascal_value(n);
    return 0;
}
