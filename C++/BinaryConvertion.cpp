#include <iostream>
using namespace std;
/*int main()
{
    int n,t;
    cin >> n >> t;
    switch(t){
        case 2 :printf("%0b",n);break;
        case 8 :printf("%ho",n);break;
        case 16:printf("%hX",n);break;
    }
}*/
int main()
{
    int r,n,t;
    string s;
    cin >> n >> t;
    switch(t){
        case 16 :{
            while(n!=0){
                r=n%16;
                if (r>9){
                    switch(r){
                        case 10:s='A'+s; break;
                        case 11:s='B'+s; break;
                        case 12:s='C'+s; break;
                        case 13:s='D'+s; break;
                        case 14:s='E'+s; break;
                        case 15:s='F'+s; break;
                    }
                }
                else if (r==0){ s='0'+s; }
                else { char d=r+48; s=d+s; }
                n=n/16;
            }
            cout << s; break;
        }
        case 8 :{ while(n!=0){ r=n%8; char d=r+48; s=d+s; n=n/8; } cout << s; break; }
        case 2 :{ while(n!=0){ r=n%2; char d=r+48; s=d+s; n=n/2; } cout << s; break; }
    }
}
