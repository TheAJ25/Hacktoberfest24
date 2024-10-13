class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int min_val = prices[0];
        int profit = 0;
        for(auto it: prices){
            if(it<min_val){
                min_val = it;
            }
            else{
                profit = max(profit, it-min_val);
            }
        }
        return profit;
    }
};
