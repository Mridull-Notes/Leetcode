class Solution {
public:
    bool search(vector<int>& A, int target) {
        int n=A.size();
        int lo=0;
        int hi=n-1;

        while(lo<=hi){
            int mid=lo+((hi-lo)/2);

            if(A[mid]==target) return true;

            else if(A[mid]==A[lo] && A[mid]==A[hi]){
                lo++;
                hi--;
                }

            else if(A[mid]<=A[hi]){
                if(target>A[mid] && target<=A[hi]){
                    lo=mid+1;
                }

                else hi=mid-1;
            }

            else{
                if(target<=A[mid] && target>=A[lo]){
                   hi=mid-1;
                }

                else  lo=mid+1;
            }
            }

            

            return false;

        }
        
    
};