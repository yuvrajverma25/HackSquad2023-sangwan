#include <bits/stdc++.h>
#define int long long
using namespace std;


int lcm(int a, int b) {
    return (a*b)/(__gcd(a,b));
}


int32_t main() {
	// your code goes here
	
	
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	
	int t,n,m;
	int x,y;
	
	cin>>t;
	while(t--) {
	    cin>>n>>m;
	    
	    vector<pair<int,int>> v;
	    for(int i=0; i<m; ++i) {
	        cin>>x>>y;
	        v.push_back({y,x});
	    }
	    
	    sort(v.begin(), v.end(), [&](pair<int,int> first, pair<int,int> second) {
	        if(first.second > second.second) {
	            return true;
	        } else if(first.second == second.second) {
	            return first.first > second.first;
	        }
	        return false;
	    });
	    
	   // for(auto it = v.begin(); it != v.end(); ++it) {
	   //     cout<<it->first<<" "<<it->second<<"\n";
	   // }
	   int prev = 1;
	   int cur = 1;
	   int ans = 0;
	   for(int i=0; i<m; ++i) {
	       cur = lcm(cur,v[i].first);
	       ans += v[i].second * (n/prev - n/cur);
	       prev = cur;
	   }
	   
	   cout<<ans<<"\n";
	}
	
	return 0;
}
