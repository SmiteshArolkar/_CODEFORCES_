#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin>>m>>n;
    if((m*n)%2==0)
    {
        cout<<m*n/2;
    }
    else
    cout<<((m*n)-1)/2;
}