class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<pair<int,int>> s;
        
        vector<int> left;
        vector<int> right;
        vector<int> width(h.size(), 0);
        vector<int> area(h.size(), 0);
        
        // nearest smallest to left
        for(int i = 0; i < h.size(); i++) {
            if(s.empty()) {
                left.push_back(-1); // using -1 for simplicity
            } else {
                while(!s.empty() && s.top().first >= h[i]) {
                    s.pop();
                }
                if(s.empty()) {
                    left.push_back(-1);
                } else {
                    left.push_back(s.top().second);
                }
            }
            s.push({h[i], i});
        }
        
        // nearest smallest to right
        stack<pair<int,int>> st;
        for(int i = h.size() - 1; i >= 0; i--) {
            if(st.empty()) {
                right.push_back(h.size()); // using size of h for simplicity
            } else {
                while(!st.empty() && st.top().first >= h[i]) {
                    st.pop();
                }
                if(st.empty()) {
                    right.push_back(h.size());
                } else {
                    right.push_back(st.top().second);
                }
            }
            st.push({h[i], i});
        }
        reverse(right.begin(), right.end());
        
        // Calculate width and area
        for(int i = 0; i < h.size(); i++) {
            width[i] = right[i] - left[i] - 1;
        }
        
        int mx = 0;
        for(int i = 0; i < h.size(); i++) {
            area[i] = width[i] * h[i];
            mx = max(area[i], mx);
        }
        
        return mx;
    }
};
