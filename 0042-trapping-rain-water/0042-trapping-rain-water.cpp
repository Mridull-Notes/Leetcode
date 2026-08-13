class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int max=height[0];
        int prev[n];
        prev[0]=-1;
     
        
        for(int i=1; i<n; i++){
            
            prev[i]=max;
            if(height[i]>max){
                max=height[i];
            }
            
        }
        prev[n-1]=-1;
        max=height[n-1];
        

        for(int i=n-2; i>=0; i--){
           
            if(prev[i]>max) {prev[i]=max;}
            if(height[i]>max){ max=height[i];}}

        int water=0;
        for(int i=0; i<n; i++ ){
            if(height[i]<prev[i]){
                water+=(prev[i]-height[i]);

            }
        }
        return water;
    }
};