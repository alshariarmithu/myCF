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
        ll a[4],b[4];
        for(int i=0;i<4;i++){
            cin>>a[i]>>b[i];
        }
        //double dis = sqrt(((a[0]-a[1])*(a[0]-a[1]))+((b[0]-b[1])*(b[0]-b[1])));
        // cout<<(ll)(dis*dis)<<lb;
        ll x1 = abs(a[0]-a[1]);
        ll x2 = abs(a[2]-a[3]);
        ll x3 = abs(a[0]-a[2]);
        ll ans = max(x1, max(x2,x3));
        cout<<(ll)(ans*ans)<<lb;
    }
    return 0;
}