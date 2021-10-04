/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

class Solution {
    public void sortColors(int[] nums) {
        int low=0,mid=0,high=nums.length-1;
        while(mid<=high){
        switch(nums[mid]){
            case 0: 
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;
                low++;mid++;
                break;
                
            case 1:
                mid++;
                break;
                
            case 2:
                int temp1 = nums[high];
                nums[high] = nums[mid];
                nums[mid] = temp1;
                high--;
                break;
        }
    }
    }
}
