class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0;
        int end=height.size()-1;
        int width;
        int area=0;
        
         while(st<end){
        
                width=end-st;
              int ht=min(height[st],height[end]);
              int currarea= ht* width;
                if(currarea>area){
                    area=currarea;
                }

                if(height[st]<height[end]){
                    st++;
                
                }

                else{
                    end--;
                }
            }
        
        return area;
        
        
    }
};