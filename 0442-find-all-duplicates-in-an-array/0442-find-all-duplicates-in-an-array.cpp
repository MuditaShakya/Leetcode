class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        sort(n.begin(), n.end()); 
        int l=n.size();
        vector<int> b; int j=0;
        for(int i=0;i<l-1;i++)
        {
            if(n[i]==n[i+1]){
                b.push_back(n[i]);
            j++;}
        } return b;
    }
};