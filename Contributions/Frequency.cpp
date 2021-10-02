#include<bits/stdc++.h>
using namespace std;
 
int main(){

    map<char,int> m;
    string s;
    cin>>s;

    char a;
    cin>>a;

    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }

    cout<<m[a];
    
    return 0;
}