class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noz=0;
        int noo=0;
        int notw=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                noz++;
            }
            else if(nums[i]==1){
                noo++;
            }
            else notw++;
        }


        for(int j=0;j<nums.size();j++){
            if(j<noz){
                nums[j]=0;
            }
            else if(j<noz+noo){
                nums[j]=1;
            }
            else nums[j]=2;
        }



        
        
    }
};