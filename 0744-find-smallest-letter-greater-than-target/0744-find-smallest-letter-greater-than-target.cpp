class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
       int s=l.size();
        int st=0, end=s-1; char res=l[0];
        while(st<=end)
        {
            int mid=(st+end)/2;
            if(l[mid]==t)
                st=mid+1;
            else if(l[mid]>t)
            { res=l[mid];
                end=mid-1;}
            else
                st=mid+1;
        }
        return res;
    }
};