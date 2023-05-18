#include<stdio.h>
#include<string.h>

int isPanagram(char *str,int size){
    int freq[26] = {0};
    int ind;

    for (int i = 0; i < size; i++)
    {
       int  ass = ("%d",str[i]);
        if (ass > 64 && ass <91)
        {
            ind = str[i] - 'A';
        }
        else if (ass >96 && ass < 123)
        {
            ind = str[i] -'a';
        }
        freq[ind] = 1;
    }
    int flag = 1;
    for (int i = 0; i < 27; i++)
    {
        printf("%d\n",freq[i]);
       if (freq[i] == 0)
       {
        flag = 0;
        break;
       }
       
    }
    return flag;

}

int main(){
    char s[]="the quick brown fox jumps over the lazy dog";
    int size = sizeof(s)/sizeof(s[0]);

    int result = isPanagram(s,size);
    if (result)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    

    return 0;
}