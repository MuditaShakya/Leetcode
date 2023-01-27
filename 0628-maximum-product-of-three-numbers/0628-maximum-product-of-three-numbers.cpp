class Solution {
public:
    int maximumProduct(vector<int>& n) {
        int l=n.size(); 
    
        /*for(int i=0;i<l-1;i++)
        {
            for(int j=1;j<l-i-1;j++)
            {
                if(n[j]>n[j+1])
                {
                swap(n[j], n[j+1]);
                }
            }
        } */
         
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
//product of max, 2nd max and 3rd max or product of min, 2nd min an d max.