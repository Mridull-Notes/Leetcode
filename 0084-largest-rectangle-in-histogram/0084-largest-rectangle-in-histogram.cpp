class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        if(n==1) return heights[0];
        int maxarea=INT_MIN;
        int width=0;
        vector<int>nse(n);
        vector<int>pse(n);
        vector<int>ans(n);
        stack<int>st;
        nse[n-1]=n;
        st.push(n-1);
        for(int i=n-2; i>=0; i--){
            while(st.size()>0 && heights[i]<=heights[st.top()]){
                st.pop();
            }
            if(st.size()==0){
                nse[i]=n;
            }
            else nse[i]=st.top();

            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }


        pse[0]=-1;
        st.push(0);



        for(int i=1; i<n; i++){
            while(st.size()>0 && heights[i]<heights[st.top()]){
                st.pop();
            }
            if(st.empty()){
                pse[i]=-1;
            }
            else pse[i]=st.top();

            st.push(i);
        }

        for(int i=0; i<n; i++){
            width=nse[i]-pse[i]-1;
            ans[i]=heights[i]*width;
            maxarea=max(maxarea,ans[i]);
        }

        return maxarea;
        
    }
};