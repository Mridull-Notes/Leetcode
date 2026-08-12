class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
       int i=m-1;
       int j=n-1;
       int k=m+n-1;

       while(i>=0 && j>=0){
        if(A[i]<B[j]){
        A[k]=B[j];
        j--;
        }

        else{ A[k]=A[i];
        i--;}

        k--;}
        

        while(i<j && j>=0){
            A[k]=B[j];
            j--;
            k--;
        }

        while(j<i && i>0){
            A[k]=A[i];
            i--;
            k--;
        }}

}
;

















































































































































































    
