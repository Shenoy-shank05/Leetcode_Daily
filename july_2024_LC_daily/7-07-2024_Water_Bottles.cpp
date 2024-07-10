class Solution {
public:
    int numWaterBottles(int bottles, int exchange) {
        
        int ans=bottles;
        int empty=bottles;
        int drink;
        while(empty>=exchange){
            drink=empty/exchange;
            empty-=drink*exchange;
            ans+=drink;
            empty=drink+(empty%exchange);
        }
        return ans;
    }
};
