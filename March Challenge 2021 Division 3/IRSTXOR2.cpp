#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576,
    2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824};

    int t;
    cin>>t;

    while(t--)
    {
        int c;
        cin>>c;

        int temp=c;
        int n=0,sb=0;

        while(temp!=0)
        {
            if(temp%2==1)
                sb++;
            n++;
            temp/=2;
        }
        int bin_a[n],bin_b[n];
        temp=c;
        int i=0;

        while(temp!=0)
        {
            if(temp%2==1)
            {
                if(sb==1)
                {
                    bin_a[i]=1;
                    bin_b[i]=0;
                }
                else{
                    bin_a[i]=0;
                    bin_b[i]=1;
                }
                sb--;
            }
            else
            {
                bin_a[i]=1;
                bin_b[i]=1;
            }

            i++;
            temp/=2;
        }

        ll a=0,b=0,prod=0;
        int base=1;
        i=0;
        while(i<n)
        {
            a += bin_a[i]*base;
            b += bin_b[i]*base;
            base *= 2;
            i++;
        }
        prod = a * b ;
        cout<<prod<<endl;


    }

}
