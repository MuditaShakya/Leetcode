class Solution {
public:
    int countSeniors(vector<string>& a) {
        int c=0;
        for(auto it: a)
        {
            char tens=it[11];
            char ones=it[12];
            if(tens=='6' && ones>'0' || tens>'6')
                c++;
        }
        return c;
    }
};