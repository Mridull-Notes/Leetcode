class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>ans(2*n);

        int i=0;
        int j=n;
        int k=0;
        
        while(i<n+1 && k<(2*n) && j<(2*n)){
           if(k%2==0)
           { ans[k]=nums[i];
             i++;
             k++;

         }

         else{
            ans[k]=nums[j];
            j++;
            k++;
         }
    
    }
    return ans;}
};