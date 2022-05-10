#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int caps = 0, small = 0 ;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]<97)
        {
            caps++;
        }
        else small++;
    }
    if(caps>small)
    {
        for(int i=0; i<s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s;



}