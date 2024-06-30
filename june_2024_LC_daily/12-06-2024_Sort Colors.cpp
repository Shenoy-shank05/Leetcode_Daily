class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;
        int j=n-1;
        for(int k=0;k<n;k++){

            if(nums[k]==0){
                swap(nums[i],nums[k]);
                i++;
            }
        }
        for(int k=n-1;k>=0;k--){

             if(nums[k]==2 ){
                swap(nums[j],nums[k]);
                j--;
            }
        }
       

    }
};
