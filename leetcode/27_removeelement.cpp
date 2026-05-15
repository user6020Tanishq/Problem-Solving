class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       erase(nums,val);
       return nums.size();
    }
};

/*
Difficulty- easy
T.C- O(n)
approach-
this erase function removes the given value from nums by calling the destructor in the same way the popback and resize works,
we could also do it by iterating through each element and if the value is found then erase(nums.begin + iterator, value)
to destruct the element and shift the remaining elements to occupy the space, it is done in O(n*n) time because it requires shifting 
though the erase function we used first shifts all the values found in nums and then destructing the values from the end thus
reducing the time complexity to O(n)

*/