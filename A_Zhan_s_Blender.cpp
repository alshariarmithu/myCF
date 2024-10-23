#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
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
        ll n;cin>>n;
        ll x,y;cin>>x>>y;
        double a = min(x,y);
        ll ans = ceil(n/a);
        // if(ans==1 and n!=3)ans=0;
        // ans+= (n%a);
        cout<<ans<<lb;
    }
    return 0;
}