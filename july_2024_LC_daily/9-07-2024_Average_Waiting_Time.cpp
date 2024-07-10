class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        

        int n=c.size();
        long long  w_time=c[0][1];
        long long  finishes=c[0][0] + c[0][1];
        long long  avg=w_time;
        for(int i=1;i<n;i++){
            
            if(c[i][0]<=finishes){
                finishes+=c[i][1];
            }
            else{
                finishes=c[i][0]+c[i][1];
            }
            
            w_time=finishes-c[i][0];
            avg+=w_time;
            

        } 
        double ans=avg/(double)n;
        return ans;
    }
};
