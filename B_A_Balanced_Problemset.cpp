#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define lb "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define LB cout << lb
#define all(v) v.begin(), v.end()
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{    
    fastIO;
    ll t, cs = 1;
    cin >> t;
    while (t--)
    {
        ll x,n;cin>>x>>n;
        ll ans = 1;
        for(ll i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                if(n<= x/i)ans=max(ans,i);
                if(n<=i)ans=max(ans,x/i);
            }
        }
        cout<<ans<<lb;
    }
    return 0;
}