class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxval = 0, counter = 0;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] == 1){
                counter++;
            } else{
                maxval = max(maxval, counter);
                counter=0;
            }
        }
        maxval = max(maxval, counter);
            
        return maxval;
    }
};

/*
Difficulty- easy
T.C- O(n)

Approach- 
when nums[i] is 1 then increment counter else maxvalue will be maximum of maxvalue and counter and counter gets reset to zero 

at last return maximum of maxvalue and counter
*/