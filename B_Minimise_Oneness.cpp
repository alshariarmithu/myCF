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
        string s="";
        for(int i=1;i<=n;i++)
        {
            if(i==n)s+='1';
            else s+='0';
        }
        cout<<s<<lb;
    }
    return 0;
}