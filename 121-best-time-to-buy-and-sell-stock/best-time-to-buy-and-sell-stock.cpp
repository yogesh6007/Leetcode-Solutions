class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int n=prices.size();
        int maxprofit=0;
        for (int i=0;i<n;i++){
            minPrice=min(minPrice,prices[i]);
            int profit=prices[i]-minPrice;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
    }
};