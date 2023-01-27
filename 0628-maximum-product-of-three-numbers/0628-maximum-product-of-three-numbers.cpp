class Solution {
public:
    int maximumProduct(vector<int>& n) {
        int l=n.size(); 
        
        sort(n.begin(), n.end());
        
        int p1=n[l-1]*n[l-2]*n[l-3];
        int p2=n[0]*n[1]*n[l-1];
        if(p1>p2 )
        {
           return p1; 
        }
        else
        return p2;
     
    }
}; 
//either product of max, 2nd max and 3rd max or product of min, 2nd min and max.