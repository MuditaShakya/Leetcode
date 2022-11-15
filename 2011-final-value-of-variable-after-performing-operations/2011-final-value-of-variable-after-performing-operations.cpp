class Solution {
public:
    int finalValueAfterOperations(vector<string>& a) { int r=0;
        for(int i=0;i<a.size();i++)
        {
            string s=a[i];
            if(s=="++X" || s=="X++")
                r++;
                    if(s=="--X" || s=="X--")
                        r--;
        }
                                                      return r;
    }
};