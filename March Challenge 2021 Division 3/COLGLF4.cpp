#include<bits/stdc++.h>
#define ll long long

using namespace std;


ll solve(ll n, ll e, ll h, ll a, ll b, ll c){
	ll at_min=1;
	ll ans= 1e16;
	if(n<=0)
		return 0;


	//Case1: Order only for Omlettes
	if(2*n<=e){
		ans = min(ans, n*a);
	}


	//Case2: Order only for Chocolate Milkshake
	if(3*n<=h){
		ans = min(ans, n*b);
	}


	//Case3: Order only for Chocolate Cake
	if(n<=e && n<=h){
		ans = min(ans, n*c);
	}


	//Case4: Order for Omlettes and Milkshake

	if((e >= 2) && ((n - e/2)*3 <= h)){

	    ll x;
		if(a<b){
			x = min(n-1, e/2);		//maximum no. of omlette at the most n-1
		}
		else{
			x = max(at_min, n - h/3);		//minimum no. of omlette at least 1
		}
		ll cost = (a-b)*x + b*n;
		ans = min(ans, cost);
	}



	//Case5: for Both Omlettes and Chocolate Cakes

	if((e-n >= 1) && (e+h >= 2*n)){

		ll x;
		if(a-c < 0){
			x = min(n-1, e-n);		//maximum no. of omlette at the most n-1
		}
		else{
			x = max(at_min,n-h);		//minimum no. of omlette at least 1
		}
		ll cost = (a-c)*x + n*c;
		ans = min(ans, cost);
	}



	//Case6: for Both Milkshake and Chocolate Cakes

	if((h-n)/2 >=1 && (h-n)/2 >= (n-e)){

		ll x;
		if(b-c < 0)
            {
			x = min(n-1, (h-n)/2);		//maximum no. of milkshake at the most n-1
		}
		else
            {
			x = max(at_min,n-e);			//minimum no. of milkshake at least 1
		}
		ll cost = (b-c)*x + n*c;
		ans = min(ans, cost);
	}



	//Case7: for all orders Omlette, Milkshake and Cake
	if(e >= 3 && h >= 4 && n >= 3)
        {
		//total items used for all 3 orders 3 eggs and 4 chocolate bars
		ll cost = a + b + c + solve(n-3, e-3, h-4, a, b, c);
		ans = min(ans, cost);
	}


	return ans;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--)
        {

		ll n, e, h, a, b, c;
		cin>>n>>e>>h>>a>>b>>c;
		ll ans;
		if(n>e && n>h)
        {
		    cout<<"-1"<<endl;
        }
		else
        {
            ans = solve(n, e, h, a, b, c);
            if(ans == 1e16)
                cout<<"-1"<<endl;
            else
                cout<<ans<<endl;
        }

	}
	return 0;
}
