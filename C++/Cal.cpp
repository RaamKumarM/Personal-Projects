#include <iostream>
using namespace std;

void Sum(int a[], int n){
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum+=a[i];
    }
    cout << "Sum = " << sum;
}
void Sub(int a[], int n){
    int sub=0;
    for(int i=0 ; i<n ; i++){
        sub-=a[i];
    }
    cout << "Difference = " << sub;
}
void Mul(int a[], int n){
    int mul=1;
    for(int i=0 ; i<n ; i++){
        mul*=a[i];
    }
    cout << "Product = " << mul;
}

void Sum(int x, int y){cout << "Sum = " << x+y;}
void Sub(int x, int y){cout << "Difference = " << x-y;}
void Mul(int x, int y){cout << "Product = " << x*y;}
void Div(int x, int y){cout << "Quotient = " << x/y;}
void Mod(int x, int y){cout << "Remainder = " << x%y;}
void Pow(int x, int n){for(int i=1 ; i<n ; i++){x*=x;}cout << "Power = " << x;}

void Double(){
    int n,a,b;
    cout << endl << "1.Addition     2.Subtration    3.Multiplication" << endl;
    cout << "4.Divition     5.Modular Div   6.Power"          << endl;
    cin >> n;
    cout << "Numbers : ";
    cin >> a >> b;
    switch(n){
        case 1:{
            Sum(a,b);
            break;}
        case 2:{
            Sub(a,b);
            break;}
        case 3:{
            Mul(a,b);
            break;}
        case 4:{
            Div(a,b);
            break;}
        case 5:{
            Mod(a,b);
            break;}
        case 6:{
            Pow(a,b);
            break;}
    }
    cout << endl;
}

void Multi(){
    int n, b, m[20];
    cout << endl << "1.Addition     2.Subtration    3.Multiplication" << endl;
    cin >> n;
    cout << "How many ?";
    cin >> b;
    cout << "Numbers : ";
    for(int i=0 ; i<b ; i++){
        scanf("%d", &m[i]);
    }
    switch(n){
        case 1:{
            Sum(m,b);
            break;} 
        case 2:{
            Sub(m,b);
            break;}
        case 3:{
            Mul(m,b);
            break;}
    }
    cout << endl;
}
int main() {
    int e=1;
    system("clear");
    cout << "       Simple Calulator" << endl;
    while(e){
        cout << "1.Double no    2.Multi no      0.Exit" << endl;
        cin >> e;
        system("clear");
        if (e==2)
            Multi();
        else if (e==1)
            Double();
    }

    return 0;
}
