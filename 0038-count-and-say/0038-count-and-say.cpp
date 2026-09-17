class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
       
          string ans=countAndSay(n-1);
          int freq=1;
          string str="";
          char ch=ans[0];
          for(int i=0; i<ans.size()-1; i++){
            
            if(ans[i]==ans[i+1]){
                freq++;
            }

            else{
                str=str+to_string(freq)+ch;
                freq=1;
                ch=ans[i+1];
            }
          }
          str=str+to_string(freq)+ch;
          return str;

        
    }
};