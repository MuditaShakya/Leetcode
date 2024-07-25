class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        priority_queue<pair<int,int>> maxh;
        for(int i=0;i<a.size();i++)
        {
            maxh.push({abs(a[i]-x), a[i]}); //curly brackets required
            if(maxh.size()>k)
                maxh.pop();
        }
        vector<int> ans;
        while(maxh.size()>0)
        {
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};