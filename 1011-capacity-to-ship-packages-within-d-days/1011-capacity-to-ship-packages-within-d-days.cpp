

class Solution {
public:

    bool check(vector<int>& A, int days,int cap){
        int n=A.size();
        int i=0;
        int j=0;
        int sum=A[0];
        while(j<days && i<n-1){
            
            
                if(sum+A[i+1]<=cap){
                    sum+=A[i+1];
                    i++;
                }
                else {
                    j++;
                    sum=0;

                 }
        }
        if(j>=days && i<n-1){
            return false;
        }

        else return true;
    }
    int shipWithinDays(vector<int>& A, int days) {
        int max=0;
        int sum=0;
       for(int i=0; i<A.size(); i++){
        if(A[i]>max){
            max=A[i];
        }
        
        sum+=A[i];
        }

        if(days==1){
            return sum;
        }
        
        int n=A.size()-1;
        int lo=max;
        int hi=sum;
        int ans=sum;
        while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            
            if(check(A,days,mid)==true){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};