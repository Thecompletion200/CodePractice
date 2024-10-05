class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int profit;
        int maxProfit = 0;

        while(right < prices.size()){
            // If the choice is profitable
            if(prices[left] < prices[right]){
                profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
            }
            else{
                left = right;
            }
            right++;
        }

        return maxProfit;
    }
};
