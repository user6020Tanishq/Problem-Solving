class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 0; i < prices.size();i++){
            for(int j = i + 1; j < prices.size();j++){
                if(prices[j]-prices[i] > profit){
                    profit = prices[j]-prices[i];
                }
            }
        }
        if(profit > 0) return profit; 
        return 0;
    }
};

/*
problem with this approach-
TLE- for 10POW5 O(n*n) will be very large so I need to think of single pass approach

so, I don't need to check all cases

*/