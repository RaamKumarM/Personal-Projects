#include <stdio.h>
int main()
{
    int a[]={1,2,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int v=1;
    for(int i=0 ; i<n ; i++)
    {
        if (a[i]!=a[n-i-1])
        {
            printf("Not Palindrome");
            v--;
            break;
        }
    }
    if (v)
        printf("Palindrome");
        
    printf("\n");
}
