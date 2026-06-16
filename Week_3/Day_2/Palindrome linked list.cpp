class Solution {
public:
    ListNode *reversedlist(ListNode* &head){
        if(head==NULL || head->next==NULL) return head;
            ListNode* prev=NULL;
            ListNode* curr=head;
            ListNode*  forward=NULL;

            while(curr!=NULL){
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
            }
            return prev;

    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode *slow=head;
        ListNode *fast=head;
         while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
         }
         ListNode *newhead=reversedlist(slow);
         ListNode *first=head;
         ListNode *second=newhead;
         while(second!=NULL){
            if(first->val!=second->val){
                reversedlist(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
         }
         reversedlist(newhead);
         return true;
        
    }
};
