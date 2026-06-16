class Solution {
public:
int getlength(ListNode* head){
    int l=0;
    while(head!=NULL){
        head=head->next;
        l++;
    }
    return l;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int L=getlength(head);
        if(n==L){
            ListNode* temp=head->next;
            delete(head);
            return temp;
        
        }
        int travel=L-n;
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(travel--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete(temp);
        return head;


        
    }
};
