class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end());
         sort(b.begin(), b.end());
        int n=a.size();
        int m=b.size();
        int i=0;
        int j=0;
        
        vector<int> v;
      while(i<n && j<m)
      {    
         if(a[i]<b[j]){
              i++;
          }
        else  if(a[i]>b[j])
          {
              j++;
          }
           else
          { 
               if(v.empty() || v.back() !=a[i])
              v.push_back(a[i]);
               i++;
              j++;
              
          }
      } 
        return v;
    }
};