#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    
    while(t--)
    {
        string s,c;
        cin>>s>>c;
        int pass = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == c[0])
        {
            if(i%2==0 && (s.length()-1-i)%2 == 0)
            {
                pass = 1;
            }
        }

    }
    if(pass)
    {
        cout<<"yes"<<endl;
    }
    else
    cout<<"no"<<endl;
        
    

    }
      
}