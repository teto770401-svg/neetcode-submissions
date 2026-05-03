class MinStack {
public:
    MinStack() {        
    }
    stack<int> originstack;
    stack<int> minst;
    void push(int val) {
        originstack.push(val);
        if(minst.empty()) minst.push(val);
        else minst.push(min(val, minst.top()));
        return;
    }
    
    void pop() {
        originstack.pop();
        minst.pop();
        return;
    }
    
    int top() {
        return originstack.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
