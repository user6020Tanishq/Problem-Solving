class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         int n = nums.size();
         nums.reserve(2*n);
        
        for (int i = 0; i < n;i++) {
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

then insert the values at the back of vector from nums in incrementing order of index

*/
