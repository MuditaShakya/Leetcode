class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        unordered_map<int,int> mp;
        for(int j=0;j<a.size();j++)
        {
            mp[a[j]]++;
        }
        priority_queue<pair<int,int>,vector <pair<int,int>>,greater <pair<int,int>>> minh;
        for(auto i=mp.begin();i!=mp.end();i++) // here i<mp.end() is wrong.
        {
            minh.push({i->second, i->first});
            if(minh.size()>k)
                minh.pop();
            
        }
        vector<int> v;
        while(minh.size()>0)
        {
            v.push_back(minh.top().second);
            minh.pop();
        }
        sort(v.begin(),v.end());
        return v;

    }
};