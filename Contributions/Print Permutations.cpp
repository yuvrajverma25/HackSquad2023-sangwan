#include <iostream>
#include <string>
using namespace std;


void help(string input,int le,string ans){
    int l = input.length();
    if(ans.length()==le)
    {
        cout<<ans<<endl;
        return;
    }



    for(int i=0;i<l;i++)
    {
        string x =   input.substr(0,i) +input.substr(i+1,l);
        help(x,le,ans+input[i]);
    }
    

 
    
}

void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    string ans="";
     help(input,input.length(),ans);
    return;
    
}
