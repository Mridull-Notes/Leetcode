class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>finalans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=0;
        int sum=0;
       for(int k=0; k<n-2; k++){
        if(nums[k]>0) break;
        
        if(k>0 && nums[k]==nums[k-1]) continue;
        int i=k+1;
        int j=n-1;
        while(i<j){
            sum=nums[i]+nums[j]+nums[k];
            if(sum==0) {
                finalans.push_back({nums[i],nums[j],nums[k]});
                while(i<j && nums[i]==nums[i+1]) i++;
                while(i<j && nums[j]==nums[j-1]) j--;
                i++;
                j--;
                }
            else if(sum<0) i++;
            else j--;

        }
        
       }
       
       return finalans;
       
    }
};