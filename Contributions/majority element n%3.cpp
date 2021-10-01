// Majority element >n/3

// nums = [1 2 3 3 1 2 1 1 3 3]
// ans = [2,3]

#include <iostream>
#include <vector>

using namespace std;

vector<int> majorityElements (vector<int>& nums)
{
    int n = nums.size();
    int n1 = -1, n2 = -1;
    int c1 = 0, c2 = 0;

    for (int i=0; i<n; i++) {
        if (c1==0) {
            n1 = nums[i];
            c1++;
        }
        else if (c2==0) {
            n2 = nums[i];
            c2++;
        }
        else if (nums[i]==n1) {
            c1++;
        }
        else if (nums[i]==n2) {
            c2++;
        }
        else {
            c1--;
            c2--;
        }
    }

    c1 = 0; c2 = 0;
    for (int i=0; i<n; i++) {
        if (nums[i]==n1) { c1++; }
        else if (nums[i]==n2) { c2++; }
    }


    vector <int> ans;
    if (c1>n/3) {ans.push_back(n1);}
    if (c2>n/3) {ans.push_back(n2);}

    return ans;
}

int main()
{
    //vector<int> nums = {1,3,2,3,1,2,1,1,3,3};
    vector<int> nums = {1,1,2,1,1,3,3};
    vector<int> ans;

    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;


    cout << "Element with frequency >n/3 are\n";
    ans = majorityElements(nums);

    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << ",";
    }
    cout << endl;
}
