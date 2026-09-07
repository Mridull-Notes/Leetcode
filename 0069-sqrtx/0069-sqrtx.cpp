class Solution {
public:
    int mySqrt(int x) {
       int low=1;
      int high=x;
     

      if(x==0) return 0;

       while(low<=high){
        int mid=low-((low-high)/2);
        long long m=(long long) mid;
        long long y= (long long) x;
        if(m*m == y) return mid;
        else if(m*m<y) low=mid+1;
        else  high=mid-1;;
       }

       return high;

    }
};