class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        int l1=n1.size(); 
        int l2=n2.size();
        vector<int> b;
        for(int i=0;i<l1;i++)
        {  int count=0;
            for(int j=0;j<l2;j++)
            { 
              if(n2[j]==n1[i])
                { 
                 int k=j+1; 
                   while(k<l2)
                    {
                        if(n2[k]>n2[j]){
                        b.push_back(n2[k]); count++; break;}
                         k++;
                     }    
                 } } 
             if(count==0)
                b.push_back(-1);}
        
            
         return b;
        
    }
};