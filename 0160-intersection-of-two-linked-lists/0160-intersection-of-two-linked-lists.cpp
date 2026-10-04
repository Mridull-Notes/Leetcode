
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        int lenA=0;
        int lenB=0;
        while(tempA!=NULL){
            lenA++;
            tempA=tempA->next;
        }
        tempA=headA;
        while(tempB!=NULL){
            lenB++;
            tempB=tempB->next;
        }
        tempB=headB;
        if(lenA==lenB){
            tempA=headA;
            tempB=headB;
        }
        else if(lenA>lenB){
            int n=lenA-lenB;
            for(int i=1; i<=n; i++){
                tempA=tempA->next;
            }
        }
        else{
            int n=lenB-lenA;
            for(int i=1; i<=n; i++){
                tempB=tempB->next;
            } 
        }

        while(tempA!=NULL){
            if(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
            }
            else return tempA;
        }
        return 0;


    }
};