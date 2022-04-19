#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , x = 0;
    cin>> n;
    while (n--){
        string s;
        cin>> s;
        if(s[0] == '+' || s[2] == '+')
        {
            x++;
        }
        else if(s[0] == '-' || s[2] == '-')
        {
            x--;
        }
        
    }
    cout<<x;
}