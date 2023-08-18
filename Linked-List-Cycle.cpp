class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast != NULL){
              fast=fast->next;
              if(fast != NULL){
                  fast=fast->next;
                  slow=slow->next;
              }
              if(slow==fast){
                  return true;
              }
        }
       return false;
    }
};
