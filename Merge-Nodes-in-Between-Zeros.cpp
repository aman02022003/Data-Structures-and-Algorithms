class Solution {
public:
  ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode *ans = new ListNode(-1), *temp = ans;
        ListNode *curr = head->next;

        while(curr!= NULL){
            while(curr->val != 0){
                sum += curr->val;
                curr = curr->next;
            }
            ListNode *n = new ListNode(sum);
            temp->next = n;
            temp = n;
            sum = 0;
            curr = curr->next;
        }

        return ans->next;
    }
};
