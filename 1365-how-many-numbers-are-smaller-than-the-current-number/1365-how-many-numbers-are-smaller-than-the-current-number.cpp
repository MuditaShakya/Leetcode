class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& a) {
        int j=0;
        int c=0; vector<int> b;
        while(j<a.size()){
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<a[j])
            {
               c++; 
            }
            
        }  b.push_back(c);
            c=0; j++;
    } return b;
    }
};