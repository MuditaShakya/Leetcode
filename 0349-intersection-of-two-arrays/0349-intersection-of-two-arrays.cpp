class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        set<int> s;
        vector<int> v;
        for(int i=0;i<a.size();i++)
        {
            s.insert(a[i]);  //insert a1 elements in set
        }
        for(auto it:b){
            if(s.count(it)){    //check if elements of present in set?
                v.push_back(it); // store them in vector
                s.erase(it);  //erase to avoid duplication
            }
        }
            return v;
    }
};