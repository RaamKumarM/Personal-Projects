#include <iostream>
using namespace std;

// 1. Write a program to reverse a given string.
// int main()
// {
//     string s; cin >> s; int n=s.size();
//     for(int i=0 ; i<n ; ++i)
//     {
//         int t=s[i];     s[i]=s[--n];    s[n]=t;     i++;
//     }
//     cout << s;
// }

// 2. Determine whether a given string is a palindrome
// int main()
// {
//     string s; cin >> s; int n=s.size();
//     for(int i=0 ; i<n ; ++i)
//     {
//         if (s[i]!=s[--n])
//         {
//             cout << "Not Palindrome"; n=0; break;
//         }
//     }
//     if (n) cout << "Palindrome";
// }

// 3. Write a program to find the length of a string without using the strlen() function.
// int main()
// {
//     string s; cin >> s; int n=0;
//     for(int i=0 ; ; ++i)
//     {
//         if (s[i]!='\0') n++;
//         else break;
//     }
//     cout << n;
// }

// 4. Count the number of vowels and consonants in a given string.
// int main()
// {
//     string s; cin >> s;     int v=0,c=0,n=s.size();
//     char vow[]={'a','e','i','o','u','A','E','I','O','U'};
//     for(int i=0 ; i<n ; ++i)
//     {
//         int t=1;
//         if (((64<s[i])&&(s[i]<91))||((96<s[i])&&(s[i]<123)))
//         {   
//             for(int j=0 ; j<10 ; ++j)
//             {
//                 if (s[i]==vow[j]) { v++; t=0; break; }
//             }
//         }if (t) c++;
//     }
//     cout << "Vowels     : " << v << endl;
//     cout << "Consonants : " << c;
// }

// 5. Convert all lowercase characters in a string to uppercase.
// int main()
// {
//     string s; cin >> s; int n=s.size();
//     for(int i=0 ; i<n ; ++i)
//     {
//         if ((64<s[i])&&(s[i]<91))       { s[i]=s[i]+32; }
//         else if ((96<s[i])&&(s[i]<123)) { s[i]=s[i]-32; }
//     }
//     cout << s;
// }


// 6. Count the total number of words in a given sentence.
// int main()
// {
//     string s;   getline(cin,s); int w=0,n=s.size();
//     for(int i=0 ; i<n; ++i)
//     {
//         if ((s[i]==' ')||(s[i]=='.')) w++;
//     }
//     if (s[n-1]!='.') w++;
//     cout << "No of Words : " << w;
// }

// 7. Count the frequency of each character in a given string.
// void Times(string s)
// {
//     int n=s.size();
//     for(int i=0 ; i<n ; ++i)
//     {
//         char t;     int a=0;
//         if (s[i]!=' ') t=s[i];
//         else continue;
        
//         for(int j=0 ; j<n ; ++j)
//         {
//             if (t==s[j])
//             {
//                 a++; s[j]=' ';
//             }
//         }
//         cout << t << ':' << a << ', ';
//     }
// }

// int main()
// {
//     string s; cin >> s;
//     Times(s);
// }

// 8. Find the longest word in a sentence.
// int main()
// {
//     string s; getline(cin,s);
//     int n=s.size(); int c[2]={0,0};

//     for(int i=0 ; i<n ; ++i)
//     {
//         int t=0,in=i;
//         for(; s[i]!=' ' && i<n ; ++i) { t++; }
//         if (t>c[1]) { c[1]=t; c[0]=in; }
//     }
//     for(int i=c[0] ; i<n ; ++i)
//     {
//         if (s[i]!=' ') cout << s[i];    else break;
//     } 
//     cout << endl << "Count : " << c[1];
// }

// 9. Check if a given string contains only numeric digits.
// int main()
// {
//     string s; cin >> s; int n=s.size();
//     for(int i=0 ; i<n ; ++i)
//     {
//         if ((48>s[i])||(s[i]>57)) { n=0; break; }
//     }
//     if (n) { cout << "Only Numeric exists"; }
//     else   { cout << "Other Char exists"; }
// }

// 10. Find the first character that does not repeat in a given string.
// int main()
// {
//     string s; cin >> s; int n=s.size();
//     for(int i=0 ; i<n ; ++i)
//     {
//         int a=1; char t;
//         if (s[i]!=' ') { t=s[i]; }
//         else continue;
//         for(int j=i+1 ; j<n ; ++j)
//         {
//             if (t==s[j]) { a=0; s[j]=' '; }
//         }
//         if (a) { cout << t; break; }
//     }
// }

// 11. Remove a specified substring from a given string.
// int main()
// {
//     string s; getline(cin,s); int n=s.size();
//     string p; cin >> p;       int m=p.size();
//     string s1;
//     for(int i=0 ; i<n ; ++i)
//     {
//         int a=0,t=i;
//         if (s[i]==p[0])
//         {
//             for(int j=0 ; j<m ; ++j)
//             {
//                 if (s[i]==p[j]) { i++; continue; }
//                 else { i=t; break; }
//             }
//         }
//         s1.push_back(s[i]);
//     }
//     cout << s1;
// }

// 12. Replace all vowels in a string with a specified character.
// int main()
// {
//     string s; getline(cin, s); int n=s.size();
//     string v={"aeiouAEIOU"}  ; int m=v.size();
//     for(int i=0 ; i<n ; ++i)
//     {
//         for(int j=0 ; j<m ; ++j)
//         {
//             if (s[i]==v[j]) { s[i]='*'; break; }
//         }
//     }
//     cout << s;
// }

// 13. Convert a given string so that the first letter of each word is capitalised.
// int main()
// {
//     string s; getline(cin, s); int n=s.size();
//     if ((s[0]>96)&&(s[0]<123)) { s[0]-=32; }
//     for(int i=0 ; i<n ; ++i)
//     {
//         if (s[i]==' ')
//         {
//             i++;
//             if ((s[i]>96)&&(s[i]<123)) { s[i]-=32; }
//         }
//     } cout << s;
// }

// 14. Sort all characters in a string in alphabetical order.
// int main()
// {
//     string s; cin >> s; int n=s.size();
//     for(int i=0 ; i<n-1 ; ++i)
//     {
//         for(int j=i+1 ; j<n ; ++j)
//         {
//             if (s[j] < s[i])
//             {
//                 char c=s[j];
//                 s[j]=s[i];
//                 s[i]=c;
//             }
//         }
//     }
//     cout << s;
// }

// 15. Count the number of uppercase and lowercase letters in 
// a given string.
// int main()
// {
//     string s; getline(cin, s); int n=s.size();
//     int u=0,l=0;
//     for(int i=0 ; i<n ; ++i)
//     {
//         if      ((s[i]>64)&&(s[i]<91))  { u++; }
//         else if ((s[i]>96)&&(s[i]<123)) { l++; }
//     }
//     cout << "Lowercase : " << l << endl;
//     cout << "Uppercase : " << u;
// }

// 16. Remove all characters from a string except alphabetic 
// characters (A-Z, a-z).
// int main()
// {
//     string s,s1; getline(cin, s); int n=s.size();
//     for(int i=0 ; i<n ; ++i)
//     {
//         if ((s[i]>64)&&(s[i]<91)||(s[i]>96)&&(s[i]<123))
//         {
//             s1.push_back(s[i]);
//         }
//     }
//     cout << s1;
// }