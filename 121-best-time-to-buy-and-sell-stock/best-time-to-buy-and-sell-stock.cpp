class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyingPrice = prices[0];
        int Profit = 0;
        for(int i=1;i<prices.size();i++){
                if(prices[i] < buyingPrice){
                    buyingPrice = prices[i];
                }else{
                    Profit = max(Profit,prices[i]-buyingPrice);
                }
        }
        return Profit;
        
    }
};