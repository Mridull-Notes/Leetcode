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
    bool isPalindrome(ListNode* head) {
        ListNode* c=new ListNode(100);
        ListNode*curr= c;
        ListNode*prev=NULL;
        ListNode*Next=c;
        ListNode* tempc=c;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* Node=new ListNode(temp->val);
            tempc->next=Node;
            temp=temp->next;
            tempc=tempc->next;
        }
        temp=head;
        c=c->next;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        while(temp!=NULL){
            if(temp->val==prev->val){
                temp=temp->next;
                prev=prev->next;
            }
            else return false;
        }
        return true;
       
    }
};