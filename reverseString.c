
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

int main() {
    char str[] = "1234abcd";
    printf("Original string: %s\n", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
