class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());

        int twochoc_price = prices[0]+prices[1];

        if(twochoc_price <= money){
            return money - twochoc_price;
        }
        return money;
        
    }
};