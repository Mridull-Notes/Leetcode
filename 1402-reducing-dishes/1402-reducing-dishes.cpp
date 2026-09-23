class Solution {
public:
    int maxSatisfaction(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        vector<int>suff(n);
        int sum=0;
        int idx=-1;
        int coff=0;
        int x=1;
        for(int i=n-1; i>=0; i--){
            sum=v[i]+sum;
            suff[i]=sum;
        }

        for(int i=0; i<n; i++){
            if(suff[i]>0){
                idx=i;
                break;
                
            }}

        if(idx==-1) return 0;
        for(int i=idx; i<n; i++){
             coff=coff+(x*v[i]);
             x++;
        }
            
        
        return coff;
    }
};