class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        nums.reserve(2*nums.size());
        for(int i = n-1; i >= 0;i--){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
/*
Difficulty- easy
T.C- O(n)

Approach- 
First reserve the double size for nums to avoid peak memory space using vector dynamic memory allocation

then insert the values at the back of vector from nums in reverse order

*/