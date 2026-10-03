/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int len) {
        ListNode* temp=head;
        ListNode* t=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if(len==size){
            head=head->next;
            return head;}
        int n=size-len+1;
        
        for(int i=1; i<n-1; i++){
            t=t->next;
        }
        t->next=t->next->next;
        return head;
    }
};