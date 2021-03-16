#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll r,c,x;
        cin>>r>>c>>x;
        ll a[r][c],b[r][c];

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>b[i][j];
            }
        }

        if(r<x && c<x)
        {
            cout<<"No\n";
        }

        else if(r<x)
        {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c-x;j++)
                {
                    if(a[i][j] != b[i][j])
                    {
                        int temp = b[i][j]-a[i][j];
                        int k = j;
                        int ptr = 0;
                        while(ptr < x)
                        {
                            a[i][ptr+j] += temp;
                            ptr++;
                        }
                    }

                }
            }


        }
        else if(c < x)
        {
            for(int i=0;i<=r-x;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(a[i][j] != b[i][j])
                    {
                        int temp = b[i][j]-a[i][j];
                        int k = i;
                        int ptr = 0;
                        while(ptr < x)
                        {
                            a[i+ptr][j] += temp;
                            ptr++;
                        }
                    }

                }
            }
        }


        else
        {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<=c-x;j++)
                {
                    if(a[i][j] != b[i][j])
                    {
                        int temp = b[i][j]-a[i][j];
                        int k = j;
                        int ptr = 0;
                        while(ptr < x)
                        {
                            a[i][ptr+j] += temp;
                            ptr++;
                        }
                    }

                }
            }


            for(int i=0;i<=r-x;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(a[i][j] != b[i][j])
                    {
                        int temp = b[i][j]-a[i][j];
                        int k = i;
                        int ptr = 0;
                        while(ptr < x)
                        {
                            a[i+ptr][j] += temp;
                            ptr++;
                        }
                    }

                }
            }





        }

       /* for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
*/
        int flag=0;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if( a[i][j] != b[i][j] )
                {
                   // cout<<"---------------------";
                   // cout<<i<<" ** "<<j<<endl;
                    flag=1;
                }
            }
        }

        if( flag==0 )
            cout<<"Yes\n";
        else
            cout<<"No\n";


    }
}
