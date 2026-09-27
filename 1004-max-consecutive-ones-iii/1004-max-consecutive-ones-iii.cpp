class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int len=INT_MIN;
        int maxlen=INT_MIN;
        int i=0;
        int j=0;
        int flips=0;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }
                else{
                    len=j-i;
                    maxlen=max(len,maxlen);
                    while(nums[i]==1){
                        i++; 
                    }
                    i++;
                    j++;
                }
            }
        }
        len=j-i;
        maxlen=max(len,maxlen);
        return maxlen;
    }
};