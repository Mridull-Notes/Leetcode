class Solution {
public:
   void generate(int op,int cp,int n,string s,vector<string>&v){
        
        if(cp==n){
            v.push_back(s);
            return;
        }
        if(op<n){
        generate(op+1,cp,n,s+'(',v);}
        if(cp<op){
        generate(op,cp+1,n,s+')',v);}
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        
        generate(0,0,n,"",v);
        return v;
    }
};