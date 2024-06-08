
//**********************************Approach_1************************************


class Solution {
public:
    bool checkSubarraySum(std::vector<int>& nums, int k) {
        
        unordered_map<int, int> remainderMap;
        remainderMap[0] = -1;  

        int cumulativeSum = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            cumulativeSum += nums[i];
            int remainder = cumulativeSum % k;
          
            if (remainder < 0) {
                remainder += k;
            }
            
           
            if (remainderMap.find(remainder) != remainderMap.end()) {
              
                if (i - remainderMap[remainder] > 1) {
                    return true;
                }
            } else {
             
                remainderMap[remainder] = i;
            }
        }
        
        return false;
    }
};




//**********************************Approach_2************************************(  TLE  )


class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        int i=0;
        int j=1;
        int sum=nums[i];
        while(j<n){
           
            sum+=nums[j];
            if(sum%k==0){
                return true;
            }
            else if(j-i+1>2){
                int i1=i;
                int j1=j;
                int temp=sum;
                while(j1-i1+1>2){

                   temp-=nums[i1];
                   cout<<temp<<endl;
                   if(temp%k==0){
                    return true;
                   }
                   i1++;
                }
            }
            j++;

        }
        return false;
    }
};
