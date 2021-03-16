#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,h,x;
	int tz[n+1];
	
	cin>>n>>h>>x;
	
	for(int i=0;i<n;i++)
	{
		cin>>tz[i];
	}
	
	if(x >= h)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		sort( tz,tz+n);
		if(tz[n-1]+x >= h)
		{
			cout<<"YES"<<endl;
		}
		
		else
		{
			cout<<"NO";	
		}
	}
	
	
	
	
	
	
}

