class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        
        priority_queue<pair<int, pair<int, int>>> maxh;
        
        //here key will be the dist of  each cordiante from origin. which is calculated by x2+y2. 
        for(int i=0;i<a.size();i++)
        {
            maxh.push({a[i][0]*a[i][0] + a[i][1]*a[i][1], {a[i][0], a[i][1]} });
            if(maxh.size()>k)
                maxh.pop();
        }
       vector<vector<int>> v;
        while(maxh.size()!=0){
        pair<int,int>p =maxh.top().second;  //to store this we need pair remember
        v.push_back({p.first, p.second});
            maxh.pop();
        }
        return v;
    }
};