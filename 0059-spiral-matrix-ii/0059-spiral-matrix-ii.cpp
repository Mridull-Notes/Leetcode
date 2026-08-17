class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n)) ;
        int minrow=0;
        int maxrow=n-1;
        int mincol=0;
        int maxcol=n-1;
        
        int count=1;
        while(minrow<=maxrow && mincol<=maxcol){


            // for right travel//
           
                for(int j=mincol; j<=maxcol && count<=n*n; j++ ){
                  v[minrow][j]=count;
                  count++;
                 }minrow++;
            // for down travel
                for(int i=minrow; i<=maxrow && count<=n*n; i++ ){
                    v[i][maxcol]=count;
                    count++;
                }maxcol--;
            // for left travel
                for(int l=maxcol; l>=mincol && count<=n*n; l--){
                    v[maxrow][l]=(count);
                    count++;
                }maxrow--;
            // for up travel
                for(int p=maxrow; p>=minrow && count<=n*n; p--){
                    v[p][mincol]=(count);
                    count++;
                } mincol++;
            
            
        }return v;
        
    }
};