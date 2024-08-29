// using hash map 
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
         vector<int>ans;
         int c=0;
         map<int,bool>a;
         map<int,bool>b;
         for(int i=0;i<A.size();i++){
             if(A[i]==B[i])   c++;
             else{
                if(a.find(B[i])!=a.end()) c++;
                if(b.find(A[i])!=b.end()) c++;
             }
             a[A[i]]=true; 
              b[B[i]] = true ;
             ans.push_back(c);
         }
         return ans;
    }
};
// using set 
