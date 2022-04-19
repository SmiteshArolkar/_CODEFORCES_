#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[5][5];
    int pos = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        cin>>a[i][j];
        if(a[i][j] == 1)
        {
            pos = (i+1)*(j+1);
            break;
        }
        
    }
   
}
if(pos <= 20 && pos>=10)
pos<=13?pos=13-pos:pos=pos-13;
else
pos<=13?pos=(13-pos)/2:pos=(pos-13)/2;
cout<<pos;
}