#include <iostream>
using namespace std;

/*//Print 1 to N
int main()
{
    int n; cout << "Enter No : "; cin >> n; n++;
    for(int i=1 ; i<n ; ++i){ cout << i << ' '; }
}*/

/*//Print 1 to N (Even)
int main()
{
    int n; cout << "Enter No : "; cin >> n; n++;
    for(int i=1 ; i<n ; ++i){ if (i%2) cout << i << ' '; }
}*/

/*//Print 1 to N (Odd)
int main()
{
    int n; cout << "Enter No : "; cin >> n; n++;
    for(int i=1 ; i<n ; ++i){ if (!(i%2)) cout << i << ' '; }
}*/

/*//Print Tables
int main()
{
    int n; cout << "Enter No : "; cin >> n;
    for(int i=1 ; i<17 ; ++i){ cout << i << " x " << n << " = " << i*n << endl; }
}*/

/*//Print sum from 1 to N
int main()
{
    int n,sum=0; cout << "Enter No : "; cin >> n; n++;
    for(int i=1 ; i<n ; ++i){ sum+=i; } cout << "Sum = " << sum;
}*/

/*//Fibonacci series
int main()
{
    int n=0,m=1,i; cout << "Enter No : "; cin >> i;
    if (i%2) { cout << "0 "; n=1; i=i/2; } else { i=i/2;}
    for( ; i>0 ; --i){ cout << n << ' ' << m << ' '; n+=m; m+=n; }
}*/

/*//Count no of digits
int main()
{
    //string n; cout << "Enter No : "; cin >> n; cout << "Count : " << n.size();
    int n,i=0; cout << "Enter No : "; cin >> n; while(n){ i++; n=n/10; } cout << "Count : " << i;
}*/

/*//Reverse
int main()
{
    //string n; cout << "Enter No : "; cin >> n; cout << "Reverse : ";
    //for(int i=n.size()-1 ; i>=0 ; --i) { cout << n[i]; }
    int n,m=0; cout << "Enter No : "; cin >> n; cout << "Reverse : ";
    while(n) { m=(m*10)+(n%10) ; n=n/10; } cout << m;
}*/

/*//Sum of Digits
int main()
{
    int n,sum=0; cout << "Enter No : "; cin >> n; cout << "Sum : ";
    while(n) { sum+=n%10; n=n/10; } cout << sum;
}*/

/*//Palindrome
int main()
{
    int n,m,o=0; cout << "Enter No : "; cin >> n; m=n;
    while(n) { o=(o*10)+(n%10); n=n/10; } 
    if (m==o) { cout << "Palindrome"; } else { cout << "Not Palindrome"; }
}*/

/*//Prime
int main()
{
    int n,i=2; cout << "Enter No : "; cin >> n;
    for( ; i<n/2 ; ++i) { if (!(n%i)) { i=0; break; } }
    if (i) { cout << "Prime"; } else { cout << "Not Prime"; }
}*/

/*//Leap Year
int main()
{
    int n; cout << "Year : "; cin >> n;
    if (!(n%400))    { cout << "Leap Year"; }
    else if (!(n%4)) { if (n%100) cout << "Leap Year"; }
    else          { cout << "Not Leap Year"; }
}*/

/*//N prime No(s)
int Prime(int n){ int m=(n/2)+2; for(int i=2 ; i<m ; i++){ if (!(n%i)) { return 0; } } return 1; }
int main()
{
    int n; cout << "Enter No : "; cin >> n; 
    for(int i=0,j=1 ; i<n ; ++i){
        for( ; ; ++j) { if (Prime(j)) { cout << j << ' '; j++; break; } }
    }
}*/

/*//Prime Btw 2
int Prime(int n){ int m=(n/2)+2; for(int i=2 ; i<m ; ++i){ if (!(n%i)) { return 0; } } return 1; }
int main()
{
    int n,m; cout << "Enter From : "; cin >> n; cout << "Enter To : "; cin >> m;
    for(int j=n ; j<m ; ++j) { if (Prime(j)) { cout << j << ' '; } }
}*/

/*//Armstrong
int main()
{
    int n,m,o=0; cout << "Enter No : "; cin >> n; m=n;
    while(n) { int t=n%10; o+=t*t*t; n=n/10; }
    if (m==o) { cout << "Armstrong Number"; } else { cout << "Not Armstrong Number"; }
}*/

/*//Decimal to Binary
int main()
{
    int n,b=0,i=1; cout << "Enter No : "; cin >> n;
    //printf("%b\n",n);
    while(n) { b=b+(n%2)*i; i*=10; n/=2; } cout << b;
}*/

/*//Sum of Odd and Even in [1,n]
int main()
{
    int n,e=0,o=0; cout << "Enter No : "; cin >> n;
    for(int i=1 ; i<=n ; ++i){ if (i%2) { o+=i; } else { e+=i; } }
    cout << "Sum(Even) : " << e << endl << "Sum(Odd) : " << o;
}*/

/*//Smallest and Largest Digit
int main()
{
    int n; cout << "Enter No : "; cin >> n; int l=0,s=9;
    while(n) { int m=n%10; if (l<m) l=m; if (s>m) s=m; n/=10; }
    cout << "Largest : " << l << endl << "Smallest : " << s;
}*/

/*//Power
int main()
{
    int n,m; cout << "Enter No : "; cin >> n; cout << "Power    : "; cin >> m; int t=n;
    for(int i=0 ; i<m ; ++i) { n*=t; } cout << "Power    :  " << n;
}*/

/*//Armstrong No btw 2
int ASN(int n) { int m=n,o=0; while(n){int t=n%10; o+=t*t*t; n/=10; } if (m==o) return 1; return 0; }
int main()
{
    int n,m; cout << "Enter From : "; cin >> n; cout << "Enter To   : "; cin >> m;
    for(int i=n ; i<m ; ++i) { if (ASN(i)) cout << i << ' '; }
}*/

/*//Sum of Even and Odd digits
int main()
{
    int n,e=0,o=0; cout << "Enter No : "; cin >> n;
    while(n) { int m=n%10; if (m%2) o+=m; else e+=m; n/=10; }
    cout << "Even : " << e << endl << "Odd  : " << o;
}*/

/*//Sum of all numebers Divisible in [1,n]
int main()
{
    int n,sum=0; cout << "Enter No : "; cin >> n; n++;
    for(int i=1 ; i<n ; ++i) { if (!(i%15)) {sum+=i;} } cout << "Sum = " << sum;
}*/

//Automorphic Number
int main()
{
    int n,s; cout << "Enter No : "; cin >> n; s=n*n;
    while(n) { if (!((n%10)==(s%10))) s=0; n/=10; s/=10; }
    if (s) { cout << "Automorpic Number"; } else { cout << "Not Automorphic Number"; }
}
