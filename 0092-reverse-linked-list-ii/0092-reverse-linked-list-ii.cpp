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
    ListNode* reverse(ListNode* head) {
        ListNode*curr= head;
        ListNode*prev=NULL;
        ListNode*Next=head;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }

        return prev;
        
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        int count=0;
        
        ListNode*a= NULL;
        ListNode*b= NULL;
        ListNode*temp= head;
        ListNode*c= NULL;
        ListNode*d= NULL;
        
        while(temp!=NULL){
            count++;
            if(count==left-1){
                a=temp;
            }
            if(count==left){
                b=temp;
            }
            if(count==right){
                c=temp;
            }
            if(count==right+1){
                d=temp;
            }
            
            temp=temp->next;
        }
        
        if(a){
        a->next=NULL;
        }
        c->next=NULL;
        c=reverse(b);
        if(a==NULL){
            b->next=d;
            return c;
        }
         
        a->next=c;
        b->next=d;
        return head;

        
         
    }
};