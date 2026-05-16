class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        if(arr.size() == 0) return {};
        
        int max = arr[arr.size()-1], temp;
        arr[arr.size()-1] = -1;
        
        for(int i = arr.size()-2; i >= 0; i--){
            temp = arr[i];            
            arr[i] = max;
            if(max < temp) max = temp;            
        }
        
        return arr;
    }
};
/*
Difficulty- easy
T.C- O(n)

approach- 
because we need max on the right of elements excluding themselves so we initialize the max with last element 
and traverse in reverse starting from the second last element and updating the values with max and max as well for the 
next iteration



*/