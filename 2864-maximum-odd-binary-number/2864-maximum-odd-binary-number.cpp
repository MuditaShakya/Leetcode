class Solution {
public:
    string maximumOddBinaryNumber(string s) {
    sort(s.rbegin(), s.rend());
        int n=s.size()-1;
        for(int i=n;i>=0;i--)
        {
            if(s[i]=='1')
            {
                swap(s[i],s[n]);
                break;
            }
        }
        return s;
    }
};