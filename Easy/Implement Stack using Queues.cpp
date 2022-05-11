class MyStack {
public:
    vector<int> rs;
    
    MyStack() {
        
    }
    
    void push(int x) {
        rs.push_back(x);
    }
    
    int pop() {
        int temp = rs.back();
        rs.pop_back();
        return temp;
    }
    
    int top() {
        return rs.back();
    }
    
    bool empty() {
        return !rs.size();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */