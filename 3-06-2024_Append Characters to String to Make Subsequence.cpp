class Solution {
public:
    int appendCharacters(string s, string t) {
        

        int j=0;
        int n=s.length();
        int m=t.length();
        for(int i=0;i<n;i++){
            if(s[i]==t[j]){
                j++;
            }

        }
        return m-j;
    }
};
