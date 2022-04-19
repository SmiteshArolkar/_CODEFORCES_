#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int a[3];
        int pass = 0;
        for(int i = 0; i < 3; i++)
        {
            cin>>a[i];
            if(a[i] == 1)
            {
                pass++;
            }
        }
        if(pass == 2 || pass == 3)
        {
            count++;
        }
    }
    cout<<count<<"\n";
}