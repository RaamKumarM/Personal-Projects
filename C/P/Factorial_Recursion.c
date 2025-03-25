#include <stdio.h>

int Fact(int n, int m)
{
    m=m*n;
    n--;
    if(!n)
        return m;
    return Fact(n,m);
}

int main()
{
    int n, m=1;
    scanf("%d", &n);
    printf("%d", Fact(n,m));
}
