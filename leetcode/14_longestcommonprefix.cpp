class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        int min_val = strs[0].size();
        for (const string& s : strs) {
            min_val = min(min_val, (int)s.size());
        }
        
        string res = "";
        for (int i = 0; i < min_val; i++) {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != ch) {
                    return res;
                }
            }
            res += ch;
        }
        return res;
    }
};
/*
Difficulty- easy 
T.C- O(m*n) m- minimum string size, n- string vector size 

approach-
compare the characters from first string with that of subsequent strings iteratively and add the characters to the result if the corresponding characters from subsequent strings are same else return the result
do this iteration for n strings and m- minimum size of all strings

*/