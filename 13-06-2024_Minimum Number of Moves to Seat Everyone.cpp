class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        int ans=0;
        int n=seats.size();
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(int i=n-1;i>=0;i--){
            ans+=abs(seats[i]-students[i]);
        }
        return ans;
    }
};
