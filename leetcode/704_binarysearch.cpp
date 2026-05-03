/*
question- return the index of the target in a given vector
if not found return -1

approach- recursively divide the vector into half by comparison of element at the mid index with
the target element adjust the low and high pointer to point to either half
with each iteration also comparing the target element with the mid element with each iteration 

T.C- O(logn)

*/


#include <bits/stdc++.h>
#include <vector>


class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int l = 0,h = nums.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(target == nums[mid]){
                return mid;
            }else if(target < nums[mid]){
                h = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return -1;
        
    }
};

int main() {
    int target = 4;
    std::vector<int> nums = {1,3,4,6,7,13,20};
    
    Solution a;
    int b = a.search(nums, target);
    std::cout << b;

}


