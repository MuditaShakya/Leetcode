class Solution {
public:
    int differenceOfSum(vector<int>& n) {
        int es=0, ds=0;
        for(auto it: n){
            es+=it;
        
        while(it)
        {
            int d=it%10;
            ds=ds+d;
            it=it/10;
        }
    } return (abs(es-ds));
    }
};