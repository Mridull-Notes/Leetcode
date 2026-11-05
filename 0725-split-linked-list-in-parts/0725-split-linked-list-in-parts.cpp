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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       ListNode*temp = head;
       vector<ListNode*>ans;
       int n=0;
       while(temp!=NULL){
        n++;
        temp=temp->next;
       }
       temp=head;
       int size=n/k;
       int rem=n%k;
       while(temp){
            ListNode* c=new ListNode(100);
            ListNode* tempc=c;
            int s=size;
            if(rem>0){
                s++;
            }
            rem--;
        for(int i=1; i<=s; i++){
            tempc->next=temp;
            temp=temp->next;
            tempc=tempc->next;
        }
        tempc->next=NULL;
        ans.push_back(c->next);
       }
       if(ans.size()<k){
        int extra=k-ans.size();
        for(int i=0; i<extra; i++){
            ans.push_back(NULL);
        }
       }
       return ans;

    }
};