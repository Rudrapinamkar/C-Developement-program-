class MinStack {   // Ths is the leetcode wuestion 
public:
    std::stack<int> minstack;
    std::stack<int> stack;
    int temp=0;
    MinStack() {
       
    }
    
    void push(int value) {
        stack.push(value);
        if(minstack.empty() || value<=minstack.top()){
            minstack.push(value);
        }
    }
    
    void pop() {
        if(stack.top()==minstack.top()){
            minstack.pop();
        }
        stack.pop();
        
    }
    
    int top() {
        int top = stack.top();
        return top;
        
    }
    
    int getMin() {
        int min = minstack.top();
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
