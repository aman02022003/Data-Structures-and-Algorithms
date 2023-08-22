class Solution {
public:
    
    int getlen(ListNode* head){
        int len=0;
        while(head){
            ++len;
            head=head->next;
        }
        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;

        int len=getlen(head);
        int actualrotate=(k%len);
        if(actualrotate==0) return head;

        int newlastnodepos=len-actualrotate-1;
        ListNode* newlastnode=head;
        for(int i=0; i<newlastnodepos;i++){
            newlastnode=newlastnode->next;
        }
        ListNode* newhead=newlastnode->next;
        newlastnode->next=0;
        
        ListNode* it=newhead;
        while(it->next){
            it=it->next;
        }
        it->next=head;
        return newhead;
    }
