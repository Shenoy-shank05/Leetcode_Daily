class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        

        int n=words.size();
        vector<string> ans;
        unordered_map<char,int> mp1;
        for(int i=0;i<words[0].size();i++){
            mp1[words[0][i]]++;
        }
        unordered_map<char,int> mp2;
        for(int i=1;i<n;i++){
            
            for(int j=0;j<words[i].size();j++){

                mp2[words[i][j]]++; 
            }
             for(int j=0;j<words[0].size();j++){
                 
                 mp1[words[0][j]]=min(mp1[words[0][j]] ,mp2[words[0][j]]);  
            }
           
           mp2.clear();
        }


        string temp;
        for(auto it:mp1){
          
            for(int i=0;i<it.second;i++){
                temp.push_back(it.first);
                ans.push_back(temp);
                temp.clear();
            }
        }

        return ans;


    }
};
