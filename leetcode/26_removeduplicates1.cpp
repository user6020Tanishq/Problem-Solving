class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        for(int i = 0; i < n; i++){
            if(i < n-1 && nums[i] != nums[i+1]){
                nums[idx++] = nums[i];
            }
            if(i == n-1) nums[idx++] = nums[i];
            
        }
        nums.resize(idx);
        
        
        return nums.size();
    }
};


/*
Difficulty- easy 
T.C- O(n)

approach-
new 2 pointer approach in which i am traversing through the nums and incrementing the idx only when the next element is not equal
and assigning it that value, then after the last recorded index i am resizing the vector to index plus one

previous approach-
create an unordered_set(for constant time lookup) and insert the value if it is not in set and replace the value of nums at the respective index and increment the index for the next value that will be inserted 

at the end return the incremented index to return the value of distinct elements.

*/