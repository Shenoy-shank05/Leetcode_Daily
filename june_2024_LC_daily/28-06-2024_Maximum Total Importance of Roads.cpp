class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        unordered_map<int,int> mp;
        vector<pair<int,int>> degree;
        long long ans=0;
        for(int i=0;i<roads.size();i++){
            mp[roads[i][0]]++;
            mp[roads[i][1]]++;
        }
        for(auto it: mp){
            degree.push_back({it.first,it.second});
        }
        std::sort(degree.begin(), degree.end(), [](auto &left, auto &right) {
                 return left.second < right.second;
        });
      
        for(int i=degree.size()-1;i>=0;i--){

           mp[degree[i].first]=n;
           n--;
        }
        for(int i=0;i<roads.size();i++){
           ans+=mp[roads[i][0]]+mp[roads[i][1]];
        }
        return ans;
       
       
    }
};
