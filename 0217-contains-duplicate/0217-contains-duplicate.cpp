class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int st=0;
     int end=st+1;
     while(end<nums.size()){
        if(nums[st]==nums[end]){
            return true;
        }
        st++;
        end++;
     }
     return false;
    

    }
};