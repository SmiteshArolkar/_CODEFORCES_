#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   while (t--)
   {
      int a[4];
      for (int i = 0; i < 4; i++)
      {
         cin >> a[i];
      }
      int x = a[0];
      sort(a, a + 4,greater<int>());
      int i = 0;
      for (i = 0; a[i] != x; i++)
      {
      }
      cout << i << "\n";
   }

   return 0;
}