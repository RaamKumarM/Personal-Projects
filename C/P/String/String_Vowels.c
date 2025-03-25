#include <stdio.h>
#include <string.h>

int main()
{
    char ch[20]="Hello World";
    char v[11]="aeiouAEIOU";

    for(int i=0 ; i<strlen(ch) ; i++)
        for(int j=0 ; j<strlen(v) ; j++)
            if (ch[i]==v[j])
            {
                printf("Vowels Present!");
                break;
            }
}
