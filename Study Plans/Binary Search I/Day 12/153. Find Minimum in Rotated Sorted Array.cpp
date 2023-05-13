// Problem Link
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

// Solution:
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        int start = 0, end = nums.size() - 1;
        while (start < end) {
            int mid = (start + end) / 2;
            if (mid > 0 && nums[mid] < nums[mid - 1]) return nums[mid];
            if (nums[start] <= nums[mid] && nums[mid] > nums[end]) start = mid + 1;
            else end = mid - 1;
        }
        return nums[start];
    }
};