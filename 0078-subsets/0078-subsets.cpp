class Solution {
public:
    void subsets(vector<int>& original, vector<int> ans, vector<vector<int>>&Finalans,int idx){
        if(idx==original.size()){
            Finalans.push_back(ans);
            return;
        }
        subsets(original,ans,Finalans,idx+1);
        ans.push_back(original[idx]);
        subsets(original,ans,Finalans,idx+1);



    }
    vector<vector<int>> subsets(vector<int>& original) {
        vector<int>ans;
        vector<vector<int>>Finalans;
        subsets(original,ans,Finalans,0);

   return Finalans; }
};