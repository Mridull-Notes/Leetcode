class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        vector<int>prefix(nums.size(),1);
        vector<int>suffix(nums.size(),1);
        int i=0;
        int j=nums.size()-1;
        int prepro=1;
        int suffpro=1;
        while(i<nums.size() && j>=0){
            prefix[i]=prepro;
            suffix[j]=suffpro;
            prepro*=nums[i];
            suffpro*=nums[j];
            i++;
            j--;
        }

        for(int i=0; i<nums.size(); i++){
            ans[i]=prefix[i]*suffix[i];
        }

        return ans;
    } 
};