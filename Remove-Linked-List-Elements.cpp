class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        int key=val;
        while(head && (head->val==val)){
            ListNode* tempnode=head;
            head=head->next;
            delete tempnode;
        }
        
        ListNode* prev=head;
        ListNode* curr=head;
        while(curr){
            if(curr->val==val){
                ListNode* tempnode=curr;
                prev->next=curr->next;
                curr=curr->next;
                delete tempnode;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }

        return head;
    }
};
