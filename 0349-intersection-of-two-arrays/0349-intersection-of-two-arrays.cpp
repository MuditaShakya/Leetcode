class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        vector<int> v; int c=0;
        for(int i=0;i<n1.size();i++)
        {
            for(int j=0;j<n2.size();j++)
            {
                if(n1[i]==n2[j])
                {  c=0;
                    for(int k=0;k<v.size();k++){
                        if(v[k]==n1[i])
                            c++;
                    } if(c==0)
                   v.push_back(n1[i]);
                    
                
                }
            }
        }
        return v;
    }
};