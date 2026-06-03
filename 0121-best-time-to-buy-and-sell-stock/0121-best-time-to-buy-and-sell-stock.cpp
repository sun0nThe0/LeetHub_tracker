class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int maxprofit=0;
        for(int index=0;index<prices.size();index++){
            buy=min(prices[index],buy);
            if(prices[index]>buy){
                maxprofit = max(maxprofit,prices[index] - buy);
            } 
        }
        return maxprofit;   
    }
};