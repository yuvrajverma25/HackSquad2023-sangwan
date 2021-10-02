#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int arr1[] = { 9, 1, 20, 5, 3, 2 };
    int arr2[] = { 9, 3, 2, 1 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
	
	unordered_set<int> s;
    for (int i = 0; i < m; i++) {
        s.insert(arr1[i]);
    }
    int p = s.size();
    for (int i = 0; i < n; i++) {
        s.insert(arr2[i]);
    }
    if (s.size() == p) {
       cout << "arr2[] is subset of arr1[] "<<endl;
    }
    else {
        cout << "arr2[] is not subset of arr1[] "<<endl;
    }
	return 0;
}
