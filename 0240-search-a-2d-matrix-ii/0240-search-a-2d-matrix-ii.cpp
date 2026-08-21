class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
         int row=m.size();
        int col=m[0].size();

        int i=0;
        int j=col-1;
        while(j>=0 && i<row){
            if(m[i][j]==target) return true;
            else if(m[i][j]<target){
                i++;
                }
            else j--;

        }

        return false;
        
    }
};