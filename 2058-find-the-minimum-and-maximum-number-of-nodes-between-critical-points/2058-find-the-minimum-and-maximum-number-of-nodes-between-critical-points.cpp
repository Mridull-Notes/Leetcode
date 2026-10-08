
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int n=1;
        ListNode*temp= head;
        
        int fidx=0;
        int sidx=0;
        if(temp->next->next==NULL) return{-1,-1};
        

        while(temp->next->next){
            
            if(temp->val<temp->next->val && temp->next->val>temp->next->next->val){ 
                if(fidx<=0){
                    fidx=n+1;
                }
                else{
                    sidx=n+1;
                }
                }
            if(temp->val>temp->next->val && temp->next->val<temp->next->next->val){ 
                if(fidx<=0){
                    fidx=n+1;
                }
                else{
                    sidx=n+1;
                }
                }
           
            
            temp=temp->next;
            n++;
            

            
        }
        if(sidx==0) return {-1,-1};
        int maxdis=sidx-fidx;
        int mindis=INT_MAX;

        n=1;
        temp= head;
        
         fidx=0;
         sidx=0;

        while(temp->next->next){
            
            if(temp->val<temp->next->val && temp->next->val>temp->next->next->val){ 
                fidx=sidx;
                sidx=n;
                if(fidx!=0){
                int d=sidx-fidx;
                mindis=min(mindis,sidx-fidx);}
                }
            if(temp->val>temp->next->val && temp->next->val<temp->next->next->val){ 
                fidx=sidx;
                sidx=n;
                if(fidx!=0){
                int d=sidx-fidx;
                mindis=min(mindis,sidx-fidx);};
                }
           
            
            temp=temp->next;
            n++;
           

            
        }
        return {mindis,maxdis};

    }
};