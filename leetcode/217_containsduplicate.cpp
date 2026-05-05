class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

/*

Difficulty - easy
brute force approach-
try each comparison starting from the first element-
T.C-
O(n*n)

But not good for larger inputs like 10pow5, which in this case will show TLE error 

so we need to think of atleast single pass approach or Linear Time Complexity
*/