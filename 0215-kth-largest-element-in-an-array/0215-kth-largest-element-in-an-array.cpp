class Solution {
public:
    int findKthLargest(vector<int>& n, int k) {
       priority_queue<int,vector<int>,greater<int>> minh;
        for(int i=0;i<n.size();i++)
        {
            minh.push(n[i]);
            if(minh.size()>k)
                minh.pop();
        }
        return minh.top();
        
    }
};