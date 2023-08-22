class Solution {
public:
 
    ListNode* findmid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

     ListNode* merge(ListNode* left, ListNode* right) {
        if(left == 0) return right;
        if(right ==0) return left;

        ListNode* ans=new ListNode(-1);
        ListNode* mptr=ans;
        while(left && right){
            if(left->val <= right->val){
                mptr->next=left;
                mptr=left;
                left=left->next;
            }
            else{
                mptr->next=right;
                mptr=right;
                right=right->next;
            }
        }
        if(left){
            mptr->next=left;
        }
        if(right){
            mptr->next=right;
        }

        return ans->next;
    }
  
    ListNode* sortList(ListNode* head) {
        if(head==0 || head->next==0){
            return head;
        }
         
         ListNode* mid=findmid(head);
         ListNode* left=head;
         ListNode* right=mid->next;
         mid->next=0;

         left=sortList(left);
         right=sortList(right);

         ListNode*mergeLL=merge(left,right);

         return mergeLL;

    }
