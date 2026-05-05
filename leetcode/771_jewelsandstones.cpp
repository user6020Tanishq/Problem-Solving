class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_set<char> j(jewels.begin(),jewels.end());
        for(auto s : stones){
            if(j.count(s)) count++;
        }
        return count;
    }
};

/*

difficulty- Easy
T.C- O(m+n)- linear
m- no. of jewels, n- no.of stones

brute force works fine on small number of stones and jewels but for large numbers O(m*n) will give TLE error

so let's try using hash set

*/
