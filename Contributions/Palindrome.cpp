// C++ program for checking a string is palindrome or not
#include <bits/stdc++.h>
using namespace std;

// Function isPalindrome
string isPalindrome(string S)
{
	// P Stores the reverse of the string S
	string P = S;
	// Reverse the string P
	reverse(P.begin(), P.end());
	if (S == P) {
		return "Yes, this string is a palindrome";
	}
	else {
		return "No, this is not a palindrome";
	}
}

// Driver Code
int main()
{
	string S;
	cout<<"enter a string :"<<endl;
	getline(cin,S);
	cout << isPalindrome(S);

	return 0;
}
