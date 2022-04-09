class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        for (int i=0; i<nums.size(); i++) queue.push(nums[i]);
        cur = k;
        
        while (queue.size() > cur) queue.pop();
        
    }
    
    int add(int val) {
        queue.push(val);
        if (queue.size() > cur) queue.pop();
        
        return queue.top();
    }
private:
    priority_queue<int, vector<int>, greater<int>> queue;
    int cur;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */