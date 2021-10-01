//Program to check whether a give expression of apranthesis is valid or not

#include<bits/stdc++.h>
using namespace std;

bool arebracketsbalanced(string expr){
    stack<char>s;
    char x;
    
    int n=expr.length();
    for(int i=0;i<n;i++){
        if(expr[i]=='(' ||expr[i]=='[' ||expr[i]=='{'){
            s.push(expr[i]);
            continue;
        }
        
        if(s.empty()){
            return false;
        }
        
        switch(expr[i]){
            case ')':

            x=s.top();
            s.pop();
            if(x=='{' ||x=='['){
                return false;
            }
            break;
            

            case '}':

            x=s.top();
            s.pop();
            if(x=='(' ||x=='['){
                return false;
            }
            break;
            

            case ']':

            x=s.top();
            s.pop();
            if(x=='(' ||x=='{'){
                return false;
            }
            break;
                                
        }
    }
    return (s.empty());



}
int main(){
       string expr= "{[]}()({})(";
       if(arebracketsbalanced(expr))
           cout<<"balanced";
       else
           cout<<"unbalanced";
       
    return 0;
}
