class Solution {
public:
    int maxSatisfied(vector<int>& cust, vector<int>& grum, int minutes) {
        int n=cust.size();
        int k=minutes;
        int lossum=0;
        for(int i=0; i<k; i++){
            if(grum[i]==1){
                lossum+=cust[i];
            }
        }
        int currsum=lossum;
        int i=1;
        int j=i+k-1;
        int maxsum=currsum;
        int maxidx=0;
        while(j<n){
            
            if(grum[j]==1){
                currsum+=cust[j];
            }
            if(grum[i-1]==1){
                currsum-=cust[i-1];
            }

            if(currsum>maxsum){
                maxsum=currsum;
                maxidx=i;
            }

            i++;
            j++;

        }
        int finalsum=0;
        for(int i=maxidx; i<maxidx+k; i++){
           if(grum[i]==1){
            grum[i]=0;
           }
           
            
        }

        for(int i=0; i<n; i++){
            if(grum[i]==0){
                finalsum+=cust[i];
            }
        }

        return finalsum;
    }
};