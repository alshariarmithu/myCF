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

/* ALSHARIAR HOSSAIN MITHU */

//https://codeforces.com/contest/1833/problem/B//
//B. Restore the Weather//

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t, cs = 1;
    cin >> t;
    while (t--)
    {
        ll n,k;cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        vector<pair<int,int>>PR(n);
        for(int i=0;i<n;i++)
        {
            PR[i].first = a[i];
            PR[i].second = i;
        }
        sort(PR.begin(),PR.end());
        sort(b.begin(),b.end());
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[PR[i].second] = b[i];
        }
        for(auto &i:ans)
        {
            cout<<i<<" "; 
        }
        cout<<lb;
    }
    return 0;
}
