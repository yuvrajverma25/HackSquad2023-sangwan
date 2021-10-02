//Problem link:https://leetcode.com/problems/power-of-four/
//Topic :Bit manipulation
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0){
			return false;
		}
        if(n & (n - 1)){
			return false;
		}
        return !(n & (0xAAAAAAAA)); // means ...10101010101010 and with n should be zero
    }
};
