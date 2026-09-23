class Solution {
public:
    
    int bestClosingTime(string str) {
        int n=str.length();
        vector<int>prefix(n+1);
        vector<int>suffix(n+1);
        vector<int>pen(n+1);
        prefix[0]=0;
        suffix[n]=0;
        int Ncount=0;
        int Ycount=0;
        int min=INT_MAX;
        int idx=0;

        for(int i=0; i<n; i++){
            if(str[i]=='N'){
                Ncount++;
                prefix[i+1]=Ncount;
            }

            else prefix[i+1]=prefix[i];
        }


        for(int i=n-1; i>=0; i--){
            if(str[i]=='Y'){
                Ycount++;
                suffix[i]=Ycount;
            }

            else suffix[i]=suffix[i+1];
        }

        for(int i=0; i<n+1; i++){
            pen[i]=prefix[i]+suffix[i];
            if(pen[i]<min){
                min=pen[i];
                idx=i;
            }
        }

       return idx; 
        
    }
};                                                                                                                                                                                                                                                               
