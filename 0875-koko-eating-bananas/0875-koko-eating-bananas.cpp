class Solution {
public:

    bool check(vector<int>& A, int h,int s){
        int n=A.size();
        
        int sum=A[0];
        long long hours=0;

        for(int i=0; i<n;i++){
            if(A[i]<=s){
                hours++;
        }

            else if (A[i]%s==0){
            hours+=(long long)A[i]/s;
            }

            else{
            hours+=(long long)(A[i]/s)+1;
            }


            }

            if(hours<=h) return true;
            else return false;


        }
        
    



    int minEatingSpeed(vector<int>& A, int h) {

        int n=A.size();
        int max=0;
        for(int i=0;i<n;i++){
            if(A[i]>max){
                max=A[i];
            }
        }
        int lo=1;
        int hi=max;
        int speed=max;

        while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(check(A,h,mid)==true){
                speed=mid;
                hi=mid-1;
            }

            else lo=mid+1;
        }
        return speed;
    }
};