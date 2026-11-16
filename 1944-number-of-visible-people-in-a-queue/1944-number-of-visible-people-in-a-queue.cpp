class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int>ans(n);
        stack<int>st;
        int count=0;
        st.push(heights[n-1]);
        ans[n-1]=0;
        for(int i=n-2; i>=0; i--){
            while(st.size()>0 && heights[i]>st.top()){
                count++;
                st.pop();
            }

            if(st.empty()){
                ans[i]=count;
            }
            else{
                count++;
                ans[i]=count;
            }

            count=0;
            st.push(heights[i]);
        }

        return ans;
    }
};