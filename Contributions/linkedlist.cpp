//author:saurabh nikam *CF-id:SetSaurabh
#include<bits/stdc++.h>
using namespace std;
 #define nn  "\n"
 #define ll long long int
 #define rep(i,a,b) for(auto i = a;i < b;i++)
 #define all(X) X.begin(),X.end() 
const long Mod=1e9+7;
const int INF = 1e9+5;
std::vector<int> adj;
std::vector<bool> vis;
int minii = 1e5;
int ans = 0;
 std::vector<int> cost;

void dfs(int x)
{
  if(vis[x]) return;
  vis[x] = 1;
  minii = min(minii,cost[x-1]);
  for(auto i=adj[x].begin();i != adj[x].end();i++)
    dfs(i);
}

void inline solve()
{
  int n,m;
  cin>>n>>m; //no of nodes
  adj.resize(n+5);
  vis.resize(n+5);
  cost.resize(n+5);
 
  for(auto &i : cost)
    cin>>i;
  memset(vis,false,sizeof(vis));
  for(int i = 0;i<m;i++)
  {
    int x,y;  
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(y);
  }
  long long ans = 0;
  for(int i = 1;i<=n;i++)
  {
    if(!vis[i])
    {
      minii = 1e5;
      dfs(i);
      ans+=minii;
    }
  }
  cout<<ans<<"\n";


    
  
}

  
signed  main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
 //        freopen("input.txt", "r", stdin);
 //        freopen("output.txt", "w", stdout);
 //    #endif // ONLINE_JUDGE -->
    int TT=1;
    // cin>>TT;
    while(TT--){ solve();}
    return 0;
}