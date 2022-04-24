#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n = (s.length()-1)/2 + 1;
    char* arr = new char(n);
    int j = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '+' )
        {
            arr[j] = s[i];
            j++;
        }
    }
    sort(arr,arr+n);
    for(int i = 0; i < n; i++)
    {
        if(i!=n-1)
        cout<<arr[i]<<"+";
        else cout<<arr[i];
    }

    
}