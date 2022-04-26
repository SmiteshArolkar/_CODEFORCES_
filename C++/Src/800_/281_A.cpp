#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    char a  = s[0];
    a = toupper(a);
    s[0] = a;
    cout<<s;
    
}