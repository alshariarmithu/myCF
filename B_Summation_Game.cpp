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
        ll n,k,x;cin>>n>>k>>x;
        ll a[n+1]={};
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1,greater<int>());
        for(int i=1;i<=n;i++)
        {
            a[i]+=a[i-1];
        }
        ll ans = -1e9;
        for(int i=0;i<=k;i++)
        {
            ans = max(ans,a[n]-2*a[min((i+x),n)]+a[i]);
        }
        cout<<ans<<lb;

     }
     return 0;
 }