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
        ll n,d,k;cin>>n>>d>>k;
        vector<ll>sd(n+1),ed(n+1);
        for(int i=0;i<k;i++)
        {
            int x,y;cin>>x>>y;
            sd[x]++;
            ed[y]++;
        }
        ll brother = 0,mom = 0,least = 1e9, most = 0;
        for(int i=0;i<n;i++)sd[i+1]+=sd[i];
        for(int i=0;i<n;i++)ed[i+1]+=ed[i];
        for(int i=d;i<=n;i++)
        {
            ll cur = sd[i]-ed[i-d];
            if(cur>most){
                most = cur;
                brother = i-d+1;
            }
            if(cur<least){
                least = cur;
                mom = i-d+1;
            }
        }
        cout<<brother<<" "<<mom<<lb;
    }
    return 0;
}