#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        if(a.length() > 10)
        {
        string len = to_string(a.length() - 2);
        cout<<*a.begin()<<len<<a.back()<<"\n";
        }
        else
        cout<<a<<"\n";
    }
}