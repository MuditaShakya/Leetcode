class Solution {
public:
    int longestConsecutive(vector<int>& a) {
       unordered_set<int> st;
        int n=a.size();
        if(n==0)
            return 0;
        int longest=1;
        
        for(int i=0;i<n;i++)  // insert in set
        {
            st.insert(a[i]);
        }
        
        for(auto it: st)  // iterate set
        {
            if(st.find(it-1)== st.end()){ // it will check that there is not any smaller element. 
                int cnt=0;
               int  x=it;
                while(st.find(x)!= st.end())
                {
                    cnt=cnt+1;
                    x=x+1;
                }
                longest=max(longest, cnt);
            }
        }
        return longest;
    }
};