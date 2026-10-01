class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int count[10][11]={};

        for(int i=0; i<pick.size(); i++){
            int player=pick[i][0];
            int color=pick[i][1];
            count[player][color]++;
        }

        int ans=0;
        for(int player=0; player<n; player++){
            for(int color=0; color<11; color++){
                if(count[player][color]>player){
                    ans++;
                    break;
                }
            }
        }

        return ans;
    }
};