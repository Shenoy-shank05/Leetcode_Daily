
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        if(!head || !head->next || !head->next->next){
            return {-1,-1};
        }
        int mindistance=INT_MAX;
        ListNode* prev=head;
        ListNode* curr=head->next;
        ListNode* front=head->next->next;
        int count=2;
        int  first_critical=0;
        int last_critical=0;
        int prev_critical=0;
        int curr_critical=0;
        while(front!=NULL){
            if(curr->val>prev->val  && curr->val>front->val  || curr->val<prev->val && curr->val <front->val){
                if(!last_critical){
                    first_critical=count;
                    curr_critical=count;
                }
               else{
                  prev_critical=curr_critical;
                  curr_critical=count;
                   mindistance=min(curr_critical-prev_critical,mindistance);
               }
                

               
               
                last_critical=count;
            }
            prev=curr;
            curr=front;
            front=front->next;
            count++;
        }
        
        if(first_critical==last_critical){
            return {-1,-1};
        }
        
        return {mindistance,last_critical-first_critical};
    }
};
