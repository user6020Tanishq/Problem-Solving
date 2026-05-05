class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;  

        for (int i = 0; i < nums.size(); i++) {
            ans[nums[i]] = i;
            //ans for this key, store the index value
        }

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (ans.count(complement) && ans[complement] != i) {
                return {i, ans[complement]};
                //checks for compliment in hash table
            }
        }

        return {};
    }
};
/*
Difficulty- easy
T.C- O(n)
In brute force approach-
we check the compliment for each nums in nums giving it the T.C- O(n*n)

instead we create hash table using unordered map for either of complements or indices, then we lookup for indices or compliments from hash table and return the index for nums and the index for compliment 
this gives linear time complexity
*/