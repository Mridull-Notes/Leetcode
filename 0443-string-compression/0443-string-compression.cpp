class Solution {
public:
    int compress(vector<char>& s) {
        int idx=0;
       

        for(int i=0; i<s.size(); i++){
            char val=s[i];
            int count=0;

            while(i<s.size() && s[i]==val){
                count++;
                i++;
            }

            if(count==1){
               s[idx]=val;
               idx++;

            }

          else{ s[idx++]=val;
           string str= to_string(count);
            for(char dig:str){
                s[idx++]=dig;
            }}
            i--;

        
        }
        s.resize(idx);
        return s.size();
    }
};