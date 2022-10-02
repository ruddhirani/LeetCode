class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=1e9; //initiating with max value
        int maxProfit=0;
        for(auto it:prices){
            //storing the minimal element in left
            minPrice=min(minPrice,it);
            // storing maximum form the current difference and stored profit
            maxProfit=max(maxProfit,(it-minPrice));
        }
        return maxProfit;
    }
};