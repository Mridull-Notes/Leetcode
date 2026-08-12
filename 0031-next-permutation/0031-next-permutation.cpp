class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n=nums.size()-1;

        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }

        int k=-1;
        
        if(idx==-1){
            int i=0;
            int j=n;
            while(i<j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }

        }

        else{
            int i=idx+1;
            int j=n;
            while(i<j){
                swap(nums[i],nums[j]);
                i++;
                j--;}
            
            for(int i=idx+1; i<=n; i++){
                if(nums[i]>nums[idx]){
                    k=i;
                    break;
                }
            }

            

            swap(nums[idx],nums[k]);
    }}
};