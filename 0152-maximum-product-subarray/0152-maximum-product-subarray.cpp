class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int currpro=nums[0];
        int prevpro=nums[0];
        int maxpro=nums[0];
        int tempmax=INT_MIN;
        int tempmin=INT_MAX;
        
        for(int i=1; i<n; i++){
            tempmax=max({nums[i],currpro*nums[i],prevpro*nums[i]});
            tempmin=min({nums[i],currpro*nums[i],prevpro*nums[i]});
            currpro=tempmax;
            prevpro=tempmin;
            maxpro=max(currpro,maxpro);
        }
        return maxpro;

    }
};