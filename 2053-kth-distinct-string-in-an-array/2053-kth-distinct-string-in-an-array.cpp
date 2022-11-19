class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {  string d;
        int j=0, ctr=0, count=0; 
        while(j<arr.size())
        {
        string c=arr[j];
        for(int i=0;i<arr.size();i++)
        { string ch=arr[i];
         if(ch==c) ctr++;
            
        } 
        if(ctr==1)
        {
             d=c; count++;
        } if(count==k) return d;
            j++; ctr=0;
        } 
       return "";
    }
};