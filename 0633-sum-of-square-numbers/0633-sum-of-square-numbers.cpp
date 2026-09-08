class Solution {
public:
    bool isPs(int t){
        int s=sqrt(t);
        if(s*s==t) return true;
        else return false;
    }
    bool judgeSquareSum(int c) {
        int x=0;
        int y=c;
        while(x<=y){
            if(isPs(x) && isPs(y)) return true;

            else if(!isPs(y)){
                y=(int)sqrt(y)*(int)sqrt(y);
                x=c-y;
            }

            else{
                x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
                y=c-x;
            }
        }
        return false;
        
    }
};