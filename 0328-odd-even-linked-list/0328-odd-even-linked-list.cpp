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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* a=new ListNode(100);
        ListNode* b=new ListNode(200);
        ListNode* temp=head;
        ListNode* tempa=a;
        ListNode* tempb=b;
        int len=1;
        while(temp!=NULL){
            if(len%2!=0){
                tempa->next=temp;
                temp=temp->next;
                tempa=tempa->next;
            }
            else{
                tempb->next=temp;
                temp=temp->next;
                tempb=tempb->next;
            }
            len++;
        }
        tempa->next=b->next;
        tempb->next=NULL;
        return a->next;
    }
};