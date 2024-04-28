class MinStack {
    stack<int> s;
    stack<int> ss;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(ss.empty() || ss.top()>=val)
            ss.push(val);
    }
    
    void pop() {
        if(!s.empty())
        {
          int ans=s.top();
            s.pop();
        if(ss.top()==ans)
            ss.pop();
        }
        
    }
    
    int top() {
       return s.top();
    }
    
    int getMin() {
        if(ss.size()==0)
            return -1;
        return ss.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */