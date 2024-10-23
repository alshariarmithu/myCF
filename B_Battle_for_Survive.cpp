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
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll sum = 0;
        for(int i=0;i<n-2;i++)sum+=a[i];
        cout<<a[n-1]+sum-a[n-2]<<lb;
    }
    return 0;
}