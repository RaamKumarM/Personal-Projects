#include <stdio.h>

int prime(int a)
{
    for(int i=2 ; i<=a/2 ; i++)
    {
        if (a%i==0)
            return 0;
    }
    //return 1;
    printf("%d ", a);
}

int main()
{
    int a[]={5,6,7,8,9,100,4};
    printf("Prime : ");
    for(int i=0 ; i<sizeof(a)/sizeof(a[0]) ; i++)
        prime(a[i]);
        
    printf("\n");
}
