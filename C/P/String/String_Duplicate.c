//Duplicate in String
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[15]="Hello World";
    for(int i=0 ; i<strlen(ch) ; i++)
        for(int j=i+1 ; j<strlen(ch) ; j++)
            if (ch[j]==ch[i])
                for(int k=j ; k<strlen(ch) ; k++)
                    ch[k]=ch[k+1];
    printf("%s", ch);
} 
