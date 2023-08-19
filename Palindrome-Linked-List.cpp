class Solution {
public:
    
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr != NULL){
            ListNode* forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        ListNode* temp=head;
        while(fast != nullptr){
             fast=fast->next;
             if(fast != NULL){
                 fast=fast->next;
                 slow=slow->next;
             }
        }
        ListNode* reversehead=reverse(slow->next);
        
        while(temp && reversehead){
            if(temp->val != reversehead->val){
                return false;
            }
            else{
                temp=temp->next;
                reversehead=reversehead->next;
            }
        }
        return true;
    }
};
