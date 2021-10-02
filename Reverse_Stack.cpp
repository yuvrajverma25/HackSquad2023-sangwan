#include<bits/stdc++.h>
#define ll long long
using namespace std;

void insert(stack<int> &s, int k){
    if(s.size()==0){
        s.push(k);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,k);
    s.push(temp);
    return;
}

void rev(stack<int> &s){
    if(s.size()==1){
    return;
    }
    int k = s.top();
    s.pop();
    rev(s); 
    insert(s,k);
    return;
}

int main(){
    stack<int> s;
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        s.push(x);
    }
    rev(s);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
