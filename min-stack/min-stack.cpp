class MinStack {
    stack <int> s1;
    stack <int> s2;
    
public:
    /** initialize your data structure here. */
    MinStack() {
       
    }
    
    void push(int x) {
        s1.push(x);
        s2.push((!s2.empty() and s2.top()<x)? s2.top() : x);
        
        
    }
    
    void pop() {
        s2.pop();
        s1.pop();
        
    }
    
    int top() {
        return s1.top();
        
    }
    
    int getMin() {
        return s2.top();
        
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