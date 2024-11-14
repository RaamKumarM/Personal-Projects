#include <iostream>
using namespace std;

int check(char a[], int b)
{
    for(int i=0 ; i<5 ; i++){
        if (a[i]==b)
            return 0;
    }
    return 1;
}

int main()
{
    char con[5];
    char ch[][5]={"abcd", "abcf", "abxy"};
    for(int i=0 ; i<5 ; i++){
        con[i]=ch[0][i];
    }
    for(int i=1 ; i<3 ; i++){
        for(int j=0 ; j<5 ; j++){
            if (check(ch[i],con[j]))
                con[j]=' ';
        }   
    }
    for(int i=0 ; i<5 ; i++){
        if (con[i]!=' ')
            printf("%c", con[i]);    
    }
}
