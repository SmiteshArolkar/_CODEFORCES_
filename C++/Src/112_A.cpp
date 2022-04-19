#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;
    int count = 0;
    for(int i=0;i<a.length();i++)
    {
        a[i] = (char)tolower(a[i]);
        b[i] = (char)tolower(b[i]);
    }
    if(a.compare(b) < 0)count = -1;
    else if(a.compare(b) > 0)count = 1;
  
    cout<<count;
}