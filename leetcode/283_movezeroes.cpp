class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                nums[idx++] = nums[i];                
            }         
        }
        nums.resize(idx);
        for(int j = idx; j < n; j++){
            nums.push_back(0);
        }

    }
};
/*
Difficulty- easy 
T.C- O(n)

approach-
2 pointer approach in which i am traversing through the nums and incrementing the idx only when the element is 
not equal to zero and assigning it that value, then after the last recorded index i am resizing the vector to index plus one
till the idx the nums is arranged now from idx to n(original size of nums) push the zeroes to get the same elements as in 
original array but arranged like- all zeroes to end



*/