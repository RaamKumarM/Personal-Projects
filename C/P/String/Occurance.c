#include <stdio.h>
int main()
{
    int n;
    int a[]={1,2,3,4,5,2,4,2};
    scanf("%d", &n);
    int w=0;
    for(int i ; i<sizeof(a)/sizeof(a[0]) ; i++)
    {
        if (a[i]==n)
            w++;
    }
    printf("Occurance of %d : %d", n, w);
}
