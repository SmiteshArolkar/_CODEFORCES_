#include <bits/stdc++.h>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//code 
	int n,k,count = 0;
	cin>>n>>k;
	int a[50];
	for(int i = 0 ; i < n ; i++)
	{
		cin>>a[i];
		if(a[i] > k)
		{
			count++;
		}
        else if(a[i] == k && !count)
        {
            count = n;
        }
	}
	cout<<count;


}