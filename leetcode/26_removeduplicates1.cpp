class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        int k = 0;
        for (int x : nums) {
            if (seen.find(x) == seen.end()) {
                seen.insert(x);
                nums[k++] = x;
            }
        }
        return k;
    }
};
/*
Difficulty- easy 
T.C- O(n)

approach-
create an unordered_set(for constant time lookup) and insert the value if it is not in set and replace the value of nums at the respective index and increment the index for the next value that will be inserted 

at the end return the incremented index to return the value of distinct elements.

*/