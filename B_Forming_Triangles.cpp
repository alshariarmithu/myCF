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
        ll n;cin>>n;
        map<ll,ll>a;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            a[x]++;
        }   
        ll res = 0 ,sum = 0;
        for(auto e:a)
        {
            ll cnt = e.second;
            if(cnt>=3)
            {
                res+=cnt*(cnt-1)*(cnt-2)/6;
            }
            if(cnt>=2){
                res+=cnt*(cnt-1)/2*sum;
            }
            sum+=cnt;
        }
        cout<<res<<lb;
    }
    return 0;
}