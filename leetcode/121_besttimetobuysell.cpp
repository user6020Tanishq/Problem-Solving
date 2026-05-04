class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minprice = prices[0];
        for(int i = 1; i < prices.size();i++){
            if(prices[i] < minprice){
                minprice = prices[i];
            }else if(prices[i]-minprice > profit){
                profit = prices[i]-minprice;
            }
            
        }
        return profit;
            
    }
};

/*
Difficulty- Easy
T.C- O(n)

in new approach instead of comparing each index with each index we will only do a single pass and in that pass we will compare the minprice counter with every increasing value and update minprice counter when a smaller value is found,
how?
only requirement for Max profit is maximum value after the minprice minus minprice,
and if the value after is decreasing then we don't need to compare it instead we will update the minprice counter

problem with brute force approach-
TLE- for 10POW5 O(n*n) will be very large so I need to think of single pass approach

so, I don't need to check all cases
insight for brute force approach-
we assume each element as minprice in all n*n iterations

while in optimized approach we will utilise the updation of minprice counter with front traversal and also the next value minus minprice 

*/