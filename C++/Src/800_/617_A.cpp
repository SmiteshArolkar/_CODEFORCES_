#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   char a;
   cin>>a;
   if(a<96)
   {
       a = a+32;
   }
   else
   a = a-32;
   printf("%c",a);
}