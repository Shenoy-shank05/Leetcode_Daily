class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        

        int n=customers.size();
        int sum=0;
        int g_sum=0;
        int diff=INT_MIN;
        for(int i=0;i<minutes;i++){
            sum+=customers[i];
            if(grumpy[i]==0){
                g_sum+=customers[i];
            }
        }
        int si=0;
        int ei=minutes-1;
        if(sum-g_sum>diff){
            diff=sum-g_sum;
            
        }

        int i=0;
        int j=minutes-1;

        while(j<customers.size()){
            j++;
            if(j>=customers.size()) break;
            sum+=customers[j];
            if(grumpy[j]==0){
                g_sum+=customers[j];
            }
            sum-=customers[i];
            if(grumpy[i]==0){
                g_sum-=customers[i];
            }
            i++;
           

            if(sum-g_sum>diff){
               diff=sum-g_sum;
               si=i;
               ei=j;
            
            }

        }
        
        int ans=0;
       cout<<si<<" "<<ei<<endl;
        for(int i=0;i<customers.size();i++){
            if(i>=si && i<=ei){
               ans+=customers[i];
            }
            else{
                if(grumpy[i]==0){
                    ans+=customers[i];
                }
            }
        }
        return ans;


    }
};
