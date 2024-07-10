class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(int i=0;i<logs.size();i++){
            string temp=logs[i];
            if(temp[0]=='.' && temp[1]=='.'){
                count>0?count--:count;
            }
            else{
                if(temp[0]!='.'){
                    count++;
                }
            }
        }
        return count;
    }
};
