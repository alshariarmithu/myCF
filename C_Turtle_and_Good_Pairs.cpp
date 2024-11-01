#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define lb "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define LB cout << lb
#define all(v) v.begin(), v.end()
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1000100;
char s[N];

int main()
{    
    fastIO;
    ll t, cs = 1;
    cin >> t;
    while (t--)
    {
        ll n;cin>>n;
        for(ll i=1;i<=n;i++)cin>>s[i];
        pair<ll,ll>pii[99];
        for(ll i=0;i<26;i++)
        {
            pii[i] = make_pair(0,i);
        }
        for(ll i=1;i<=n;i++)
        {
            ++pii[s[i]-'a'].first;
        }
        sort(pii,pii+26,greater<pair<ll,ll>>());
        string ans="";
        queue<pair<ll,ll>>q;
        while(pii[0].first>pii[1].second)
        {
            // ans+=(pii[0].second + 'a');
            char c = ('a' + pii[0].second);
            cout<<c;
            --pii[0].first;
        }
        for(ll i=0;i<26;i++)
        {
            q.push(pii[i]);
        }
        while(q.size()){
            pair<ll,ll> tmp = q.front();
            q.pop();
            if(!tmp.first){
                continue;
            }
            char c= ('a' + tmp.second);
            cout<<c;
            --tmp.first;
            q.push(tmp);
        }
        cout<<lb;
        
    }
    return 0;
}