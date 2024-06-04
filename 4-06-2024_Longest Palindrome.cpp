class Solution {
public:
    int longestPalindrome(string s) {
        
       unordered_map<char,int> mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int ans=0;
        bool odd=0;

        for(auto it:mp){
            if(it.second % 2==0){
                ans+=it.second;
            }
            if(it.second%2!=0){
                ans+=it.second-1;
                odd=1;
            }
        }
        if(odd){
            return ans+1;
        }
        return ans;
    }
};
