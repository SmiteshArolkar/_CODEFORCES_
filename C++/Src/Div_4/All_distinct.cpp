#include <bits/stdc++.h>
using namespace std;

map<int,int> a;
map<int,int>::iterator it;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        for(int i = 0 , x ; i < n ;i++)
        {
            cin>>x;
            it = a.find(x);
            if(it == a.end())
            {
                a.insert(pair<int,int>(x,1));
            }
            else
            it->second = it->second+1;
        }
        for(auto i : a)
        {
            if(!(i.second%2))
            {
                a.erase(i.first);
            }
        }
        int k = 0;
        cout<<a.size();
        a.clear();
        /* code */
    }
    
   


    return 0;
}