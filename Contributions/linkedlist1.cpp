//author:saurabh nikam *CF-id:SetSaurabh
#include<bits/stdc++.h>
using namespace std;
 #define nn  "\n"
 #define ll long long int
 #define rep(i,a,b) for(auto i = a;i < b;i++)
 #define all(X) X.begin(),X.end() 
const long Mod=1e9+7;
const int INF = 1e9+5;

void inline solve()
{
 string s;
 cin>>s;
  int n = s.size();
  bool flag = false;
  bool flag2 = false;
  int ans = 0;int lower=0;
  for(int i = 0;i<n;i++)
  {
    if(s[i] >= 'A' && s[i] <= 'Z')
      flag = true;
    if(s[i] >= 'a' && s[i] <= 'z')
      if(flag)
        {flag2 = true;lower++;}


    if(flag && flag2)
    {
      if(s[i] >= 'A' && s[i] <= 'Z')
        ans++;
    }

  }
  cout<<min(ans,lower)<<"\n";
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