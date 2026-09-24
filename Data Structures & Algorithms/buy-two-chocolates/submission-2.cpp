class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        //second approach

        int first=INT_MAX;
        int second=INT_MAX;

        for(int price:prices){
            if(price<first){
                second = first;
                first = price;
            }
            else if(price<second){
                
                second = price;
            }
        }
        int cost = first + second;

        return (cost <= money) ? money - cost : money;
        
    }
};