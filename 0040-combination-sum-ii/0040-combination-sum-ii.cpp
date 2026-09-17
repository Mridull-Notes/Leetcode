class Solution {
public:
    void comb( vector<vector<int>>& ans, vector<int>v,vector<int>& candidates,int target,int idx){
        if(target==0){
            ans.push_back(v);
            return;
        }

        

        for(int i=idx; i<candidates.size(); i++){
        
        if( i>idx && candidates[i-1]==candidates[i]){
           continue;}
        if(candidates[i]>target){
            break;
           }
        v.push_back(candidates[i]);
            
        comb(ans,v,candidates,target-candidates[i],i+1);
        v.pop_back();

        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        vector<vector<int>> ans;
        comb(ans,v,candidates,target,0);

        return ans; 
    }
};