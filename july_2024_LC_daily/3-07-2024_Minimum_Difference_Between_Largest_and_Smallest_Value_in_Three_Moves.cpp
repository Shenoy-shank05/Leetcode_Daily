class Solution {
public:
    int minDifference(vector<int>& nums) {
         int n=nums.size();
        if(n<=4){
            return 0;
        }

        sort(nums.begin(),nums.end());
        int moves=3;
        int j=n-1;
        int i=0;
        int diff1=nums[j]-nums[i+3];
        int diff2=nums[j-3]-nums[i];
        int diff3=nums[j-2]-nums[i+1];
        int diff4=nums[j-1]-nums[i+2];
        return min(diff1,min(diff2,min(diff3,diff4)));

    }
};
