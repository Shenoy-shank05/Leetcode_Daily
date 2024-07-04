class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* prev=NULL;
        ListNode* newHead;
        int sum=0;
        while(temp!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                temp->val=sum;
                sum=0;
                if(prev==NULL){
                    newHead=temp;
                    prev=temp;
                }
                else{
                    prev->next=temp;
                    prev=temp;
                }
                
            }
            temp=temp->next;
        }
        return newHead;
        
    }
};
