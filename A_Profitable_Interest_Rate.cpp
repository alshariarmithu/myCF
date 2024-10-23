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
        ll a,b;cin>>a>>b;
        if(a>=b){
            cout<<a<<lb;
            continue;
        }
        ll ans = 2*a;
        if(ans<b){
            cout<<0<<lb;
        }
        else{
            cout<<ans-b<<lb;
        }
    }
    return 0;
}