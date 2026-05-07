class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        int idx = n - 1;  
        
        while (left <= right) {
            int sqLeft = nums[left] * nums[left];
            int sqRight = nums[right] * nums[right];
            
            if (sqLeft > sqRight) {
                result[idx--] = sqLeft;
                left++;
            } else {
                result[idx--] = sqRight;
                right--;
            }
        }
        return result;
    }
};
/*
Difficulty- easy
T.C- O(n)

approach- because the array is sorted we will use two pointers left and right for iteration and iterate based on the condition- if square left>square right then result for last index(largest square) will be square left and decrease the index for result by one for position of next largest square, else result for that index is square right(largest square) and we check next square left

brute force approach-
square each num then sort nums. 
T.C-(nlogn)
*/