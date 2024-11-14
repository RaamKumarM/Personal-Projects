#include <iostream>
using namespace std;

int main()
{
    string s; getline(cin,s); int n=s.size();
    string p; cin >> p;       int m=p.size();
    string s1;
    for(int i=0 ; i<n ; ++i)
    {
        int a=0,t=i;
        if ((s[i]==p[0])&&(s[i-1]==' '))
        {
            for(int j=0 ; j<m ; ++j)
            {
                if (s[i]==p[j]) { i++; continue; }
                else { i=t; break; }
            }
            if (s[i]!=' ') { s1.push_back(s[t]); i=t+1; }
        }
        s1.push_back(s[i]);
    }
    cout << s1;
}