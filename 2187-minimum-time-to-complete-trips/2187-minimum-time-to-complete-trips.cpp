class Solution {
public:
  bool  check(vector<int>& time, int totalTrips,long long hours){
        long long trips=0;
        int n=time.size();
        for(int i=0; i<n; i++){
            trips+=hours/(long long) time[i];
            if(trips>=totalTrips){
                return true;
                break;}
        }

        return false;

        
    }
    long long minimumTime(vector<int>& time, int totalTrips) {

        int n= time.size();
        long long lo =1;
        long long max=0;
        for(int i=0; i<n; i++){
            if(time[i]>max){
                max=time[i];
            }
        }
        long long hi=(long long)max*(long long)totalTrips;
        long long ans=-1;

        while(lo<=hi){
            long long mid=lo+((hi-lo)/2);
            if(check(time,totalTrips,mid)==true){
                ans=mid;
                hi=mid-1;
            }

            else lo=mid+1;
        }
        return ans;
    }
};