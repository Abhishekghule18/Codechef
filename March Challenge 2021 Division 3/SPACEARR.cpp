#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];

        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

        sort(arr+1,arr+n+1);

        long long int sum=0;
        int flag=1;
        for(int i=1;i<=n;i++)
        {
            if((i-arr[i])>=0)
            {
                sum += i-arr[i];
            }
            else
            {
                flag=0;
            }
        }
        //long long int temp = n*(n+1)/2;
        //temp -= sum;

        if(sum%2==0 || flag==0)
        {
            cout<<"Second\n";

        }
        else
        {
            cout<<"First\n";
        }



    }
}
