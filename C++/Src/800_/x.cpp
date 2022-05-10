#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
     int n,count = 0 , a[50];
     cin>>n;
    for(int i=0; i <n; i++)
    {
        cin>>a[i];
        if(a[i] < 0)
        {
            a[i] = a[i]*(-1);
            count++;
        }

    }
    if(n/2 > count || n%2 == 0 && count > 0)
    for(int i=0; i <count; i++)
    {
        a[i] = a[i]*-1;
    }
    int pass = 1;
    for(int i=0; i<n; i++)
    {
        if(i+1 != n)
        if(!(a[i] < a[i+1]))
        {
            pass = 0;
            break;
        }
    }
    if(!pass)
    {
        cout<<"NO\n";
    }
    else cout<<"YES\n";
    }

}