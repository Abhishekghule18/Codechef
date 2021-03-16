#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;

	while(t--)
	{

	    string str;
	    cin>>str;
	    int l = str.length();

	    int cnt=0;
	    for(int i=0;i<l;i++)
        {
            if(str[i]=='1')
                cnt++;
            int j=i;
            while(str[j]=='1' && j<l)
            {
                j++;
            }
            i=j;
        }
        cout<<cnt<<endl;

	}
}
