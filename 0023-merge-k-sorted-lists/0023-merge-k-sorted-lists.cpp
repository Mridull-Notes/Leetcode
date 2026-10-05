
class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* temp1= list1;
        ListNode* temp2= list2;
        ListNode* c=new ListNode(100);
        ListNode* temp3=c;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                temp3->next=temp1;
                temp1=temp1->next;
                temp3=temp3->next;
            }
            else {
                temp3->next=temp2;
                temp2=temp2->next;
                temp3=temp3->next;
            }

        }
        if(temp1==NULL && temp2==NULL){
            return c->next;
        }
        if(temp1==NULL){
            temp3->next=temp2;
        }
        else{
            temp3->next=temp1;
        }

        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
        ListNode* a=arr[(arr.size()-1)];
        arr.pop_back();
        ListNode* b=arr[(arr.size()-1)];
        arr.pop_back();
        ListNode* c=merge(a,b);
        arr.push_back(c);
        }
     return arr[0];
    }
    
};