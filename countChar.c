#include <stdio.h>
#include <string.h>

void countCharcter(char *string, int *upperCount, int *lowerCount)
{
    *upperCount = 0;
    *lowerCount = 0;
    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        int Ass = ("%d", string[i]);
        if (Ass > 64 && Ass < 91)
        {
            (*upperCount)++;
        }
        else if (Ass > 96 && Ass < 123)
        {
            (*lowerCount)++;
        }
    }
}

int main()
{
    char s[] = "The Quick Brown Fox Jumps Over The Lazy Dog.";
    int upparCount, lowerCount;
    countCharcter(s, &upparCount, &lowerCount);

    printf("UpparCharcter := %d\nLowerCharcter := %d\n", upparCount, lowerCount);
    return 0;
}