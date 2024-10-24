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

int main()
{    
    fastIO;
    ll t, cs = 1;
    cin >> t;
    while (t--)
    {
        string s;cin>>s;
        bool ok = false;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[0]){
                swap(s[i],s[0]);
                ok = true;
                break;
            }
        }
        if(ok){
            yes;
            cout<<s<<lb;
        }
        else{
            no;
        }
    }
    return 0;
}