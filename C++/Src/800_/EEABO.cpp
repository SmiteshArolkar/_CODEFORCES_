#include <bits/stdc++.h>
using namespace std;
bool isSame(int a[] , int n)
{
    unordered_map<int,int> m;
    for(int i = 0 ; i < n; i++)
    {
        m[a[i]]++;
    }
    if(m.size() == 1)
    {
        return true;
    }
    return false;
}
int calculate(int *a, int n)
{
    while(!isSame(a,n))
    {
        
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[100];
        for(int i = 0 ; i < n; i++)
        {
            cin>>a[i];
        }
        if(calculate(a,n))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}