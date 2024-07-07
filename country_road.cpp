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
const int MAXN = 200005;
const int INF = 1000000005;
typedef pair<int,int>pii;

/* ALSHARIAR HOSSAIN MITHU */

// Shortest Path Problem in LightOJ //

int main()
{
    fastIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t, cs = 1;
    cin >> t;
    while (t--)
    {
        int n,m;cin>>n>>m;
        vector<int>g[n];
        vector<int>dis(n,INT_MAX);
        int roadCost[n][n];
        memset(roadCost,0,sizeof(roadCost));
        while(m--)
        {
            int u,v,w;cin>>u>>v>>w;
            if(roadCost[u][v])
            {
                roadCost[u][v] =min(roadCost[u][v],w);
                roadCost[v][u] = min(roadCost[v][u],w);
            }
            else{
                g[u].push_back(v);
                g[v].push_back(u);
                roadCost[u][v] = w;
                roadCost[v][u] = w;
            }
        }
        int src;cin>>src;
        queue<int>q;
        q.push(src);
        dis[src] = 0;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(auto v:g[u])
            {
                int cost  = max(roadCost[u][v],dis[u]);
                if(cost<dis[v])
                {
                    dis[v] = cost;
                    q.push(v);
                }
            }
        }
        cout<<"Case "<<cs++<<":\n";
        for(int i=0;i<n;i++)
        {
            if(dis[i]==INT_MAX)
            {
                cout<<"Impossible\n";
            }
            else{
                cout<<dis[i]<<lb;
            }
        }

    }
    return 0;
}
