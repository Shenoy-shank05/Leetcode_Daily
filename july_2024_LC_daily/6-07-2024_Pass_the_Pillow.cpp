class Solution {
public:
    int passThePillow(int n, int time) {
        
        int cycle = 2 * n - 2;
        int position= time % cycle;

        if (position < n) {
    
            return position + 1;
        } else {
         
            return 2 * n - position - 1;
        }
        
    }
};
