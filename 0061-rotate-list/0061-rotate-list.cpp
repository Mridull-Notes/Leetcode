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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        int len=0;
        ListNode* temp= head;
        while(temp!=NULL){
                len++;
                temp=temp->next;

            }
        int n=k%len;

        for(int i=1; i<=n; i++){
            temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;

            }
            temp->next->next=head;
            head=temp->next;
            temp->next=NULL;

        }

        return head;
    }
};