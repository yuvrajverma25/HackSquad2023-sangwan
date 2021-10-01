#include<bits/stdc++.h>
using namespace std;
bool matching(char a, char b)
{
    return ((a == '(' && b ==')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}
bool isBalanced(string str)
{
    stack<char> s;
    int n = str.length();
    for(int i=0; i<n; i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else{
            if(s.empty() == true)
            {
                return false;
            }
            else if(matching(s.top(), str[i]) == false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return (s.empty() == true);
}
int main()
{
    string str;
    cout<<"Enter the Paranthesis String you want to check for balance: ";
    cin>>str;
    if(isBalanced(str))
    {
        cout<<"Paranthesis string is balanced!"<<endl;
    }
    else{
        cout<<"Paranthesis string is not balanced!"<<endl;
    }
    return 0;
}