class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode* prev=NULL;
        ListNode* curr=head;
        if(curr == NULL)
        {
            return curr;
        }

     
        while(curr != NULL){
            ListNode* forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
        }
        return prev;
         
    }
};
