class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k){
            k=k%n;
        }
        revarr(0,n-k-1,nums);
        revarr(n-k,n-1,nums);
        revarr(0,n-1,nums);
        }


     void revarr(int i, int j,vector<int>&v){
            int temp=0;
            while(i<=j){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
                i++;
                j--;

            }

            
        }
};