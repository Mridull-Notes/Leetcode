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
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp= head;
        ListNode*c= new ListNode(100);
        ListNode*d= new ListNode(200);
        ListNode*tempc= c;
        ListNode*tempd= d;
        while(temp!=NULL){
            if(temp->val<x){
                tempc->next=temp;
                temp=temp->next;
                tempc=tempc->next;
            }
            else{
                tempd->next=temp;
                temp=temp->next;
                tempd=tempd->next;
            }

        }
        tempc->next=d->next;
        tempd->next=NULL;
        
        return c->next;
    }
};