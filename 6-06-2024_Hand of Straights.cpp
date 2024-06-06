class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        

        unordered_map<int,int> mp;
        if(hand.size()%groupSize!=0){
            return false;
        }
        for(int i=0;i<hand.size();i++){

            mp[hand[i]]++;
        }
         
        sort(hand.begin(),hand.end());
        int i=0;
        while(i<hand.size()){

            if(mp[hand[i]]==0){
                i++;
            }

            else{

                int temp=groupSize;
                int target=hand[i];
                while(temp--){
                    if(mp.find(target)!=mp.end() && mp[target]!=0){
                        mp[target]--;
                        target+=1;
                    }
                    else{
                        return false;
                    }
                }
                i++;
            }
            
        }
        return true;

        
    }
};
