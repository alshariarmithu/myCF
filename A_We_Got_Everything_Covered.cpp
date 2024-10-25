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
        ll n,k;cin>>n>>k;
        string s="";
        char c = 'a';
        for(int i=0;i<n;i++)
        {
            for(int i=0;i<k;i++)
            {
                s+=c;
                c++;
            }
            c='a';
        }
        cout<<s<<lb;
    }
    return 0;
}