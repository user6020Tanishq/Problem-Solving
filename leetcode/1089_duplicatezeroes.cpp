class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                arr.insert(arr.begin() + i, 0);
                arr.pop_back();
                i++;
            }
        }
        
    }
};
/*
Difficulty-easy
T.C- O(n)

approach-
traverse through the vector, when 0 found-
insert a zero at that position and jump the second element after that element to skip the newly added zero 
and simultaneously popback from the arr to retain its original size
(it can also be done at the end by using resize function with original arr size as the parameter)

concept-memory management for vectors


*/