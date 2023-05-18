
#include<stdio.h>
#include<string.h>


void swap(char *st,int i,int j){
    char temp = st[i];
    st[i] = st[j];
    st[j] = temp;
}

void reverseString(char* s){
    int i,j;
    j = strlen(s)-1;
    i = 0;
    while (i<j)
    {
        swap(s,i,j);
        i++;
        j--;
    }
    
    
}

int checkPalindrom(char* st,char* str ){
    int flag = 1;
    for (int i = 0; i < 6; i++)
    {
        if (st[i] != str[i]){
            flag = 0 ;
            break;
        }
    }
    return flag;
}

int main() {
    char str[] = "madam";
    char st[6];
    strcpy(st,str);

    reverseString(str);

    int result = checkPalindrom(st,str);
    if(result){
        printf("YES %s %s\n",str,st);
    }else{
       printf("No %s  %s\n",str,st);
    }

    
    return 0;
}
