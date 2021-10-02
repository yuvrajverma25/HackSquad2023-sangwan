/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Anagram {
public:
    string s,t;
    
    bool isAnagram(string s, string t) {
        int ls = s.length(), lt = t.length();
        if(ls!=lt){
            return false;
        }
        map<char,int> ms;
        for(int i=0;i<ls;i++){
            ms[(s[i]-97)]++;
            ms[(t[i]-97)]--;
        }
        for(auto x : ms){
            if(x.second > 0){
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Anagram ana;
    cin>>ana.s;
    cin>>ana.t;
    
    if(ana.isAnagram(ana.s,ana.t))
    std::cout << "Valid Anagram" << std::endl;
    else
    std::cout << "Invalid Anagram" << std::endl;
    return 0;
}
