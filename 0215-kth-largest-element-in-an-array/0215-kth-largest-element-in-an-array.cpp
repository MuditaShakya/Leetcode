class Solution {
public:
    int findKthLargest(vector<int>& n, int k) {
       priority_queue<int,vector<int>,greater<int>> maxh;
        for(int i=0;i<n.size();i++)
        {
            maxh.push(n[i]);
            if(maxh.size()>k)
                maxh.pop();
        }
        return maxh.top();
        
    }
};