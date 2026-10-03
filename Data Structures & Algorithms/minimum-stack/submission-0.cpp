class MinStack {
private:
    stack<int> minStack;
    stack<int> inputStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        inputStack.push(val);
        if (minStack.empty() || val < minStack.top()) {
            minStack.push(val);
        } else {
            minStack.push(minStack.top());
        }
    }

    void pop() {
        inputStack.pop();
        minStack.pop();
    }
    
    int top() {
        return inputStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
