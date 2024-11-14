//Print from 1 to N
/*
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=0 ; i<N ; i++)
        printf("%d ", i+1);
}*/

//Print Odd num from 1 to N
/*
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    N++;
    for(int i=1 ; i<N ; i++)
        if(i%2!=0)
            printf("%d ", i);
}*/

//Print Even num from 1 to N
/*
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    N++;
    for(int i=1 ; i<N ; i++)
        if(i%2==0)
            printf("%d ", i);
}*/

//Print Multiplication table(to 16)
/*
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1 ; i<16 ; i++)
        printf("%d * %d = %d\n", i, N, i*N);
}*/

//Print sum of Values from 1 to N
/*
#include <stdio.h>
int main()
{
    int N,sum=0;
    scanf("%d", &N);
    N++;
    for(int i=1 ; i<N ; i++)
        sum=sum+i;
    printf("Sum = %d", sum);
}*/

//Calcuate Factorial
/*
#include <stdio.h>
int main()
{
    int N, Fact=1;
    scanf("%d", &N);
    N++;
    for(int i=1 ; i<N ; i++)
        Fact=Fact*i;
    printf("Faactorial = %d", Fact);
}*/

//Print Squares
/*
#include <stdio.h>
int main()
{
    int N, Sq=0;
    scanf("%d", &N);
    N++;
    for(int i=1 ; i<N ; i++)
        Sq=Sq+(i*i);
    printf("Sum of Squares = %d", Sq);
}*/

//Fibonacci Series
/*
#include <stdio.h>
int main()
{
    int N, n1=0, n2=1, t;
    scanf("%d", &N);
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ", n1);
        t=n1;
        n1=n1+n2;
        n2=t;
    }
}*/

//Count No of Digit in a Integer
/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int N=printf("%d ", n);
    printf("has %d no of Digits", N-1);   
}*/

//Reverse a given Number
/*
#include <stdio.h> 
int main()
{
    int n;
    scanf("%d", &n);
    while(n)
    {
        printf("%d", n%10);
        n=n/10;
    }
}*/

//Palindrome
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[15];
    scanf("%s", ch);
    int n=strlen(ch);
    int m=1;
    for(int i=0 ; i<n ; i++)
    {   
        n--;
        if (ch[i]!=ch[n])
            m=0;
    }
    if (m)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}*/

//Prime Number
/*
#include <stdio.h>
int main()
{
    int n, m=0;
    scanf("%d", &n);
    for(int i=2 ; i<(n/2) ; i++)
        if (n%i==0)
            m=1;
    if (m)
        printf("Not a Prime Number");
    else
        printf("Prime Number");
}*/

//Leap Year
/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n%400==0)
        printf("Leap Year");
    else if ((n%4==0)&&(n%100==0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}*/

//First n Prime Numebers
/*
#include <stdio.h>
int prime(int n)
{
    for(int i=2 ; i<=(n/2) ; i++)
        if (n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,m=0;
    scanf("%d", &n);
    for(int i=2 ; m!=n ; i++)
        if (prime(i))
        {
            printf("%d ", i);
            m++;
        }
}*/

//Prime Number in Range
/*
#include <stdio.h>
int prime(int n)
{
    for(int i=2 ; i<=(n/2) ; i++)
        if (n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,m;
    scanf("%d%d", &m, &n);
    for(int i=m ; i<=n ; i++)
        if (prime(i))
            printf("%d ", i);
}*/
