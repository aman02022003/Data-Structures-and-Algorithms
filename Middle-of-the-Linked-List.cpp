class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
    
        if(head == NULL){
            return head;
        }

        while(fast != NULL){
            fast=fast->next;
            if(fast != NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }

        return slow;
    }
};
