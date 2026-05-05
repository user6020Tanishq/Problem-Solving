class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        return nums.size() != s.size();
    }
};

/*
Difficulty- Easy
T.C- O(1)

new approach-
unordered set from cpp stl removes duplicates by using hash table and using O(n) extra space for constant time lookup for accessing and removal of duplicates

so we compared the size of vector and set, if size reduced then the duplicates were removed 

brute force approach-
try each comparison starting from the first element-
T.C-
O(n*n)

But not good for larger inputs like 10pow5, which in this case will show TLE error 

so we need to think of atleast single pass approach or Linear Time Complexity
*/