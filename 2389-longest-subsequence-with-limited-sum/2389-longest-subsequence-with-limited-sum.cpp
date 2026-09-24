class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=queries.size();
        vector<int>prefix(n);
        vector<int>index(m);
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            prefix[i]=sum;
        }
        
        for(int i=0; i<m; i++){
            int len=0;
            for(int j=0; j<n; j++){
                if(prefix[j]>queries[i]) 
                
                break;
                len++;
            }
            
            index[i]=len;;
        }

        return index;
        
        

    }
};