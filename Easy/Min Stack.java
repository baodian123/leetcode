class MinStack {

    /** initialize your data structure here. */
    
    public Node head = new Node(0);
    public Node curr = head;
    
    public MinStack() {
        
    }
    
    public void push(int val) {
        Node newNode = new Node(val);
        newNode.prev = curr;
        curr.next = newNode;
        curr = newNode;
    }
    
    public void pop() {
        curr = curr.prev;
        curr.next = null;
    }
    
    public int top() {
        return curr.val;
    }
    
    public int getMin() {
        Node temp = head.next.next;
        int min = head.next.val;
        while (temp != null) {
            if (temp.val < min) {
                min = temp.val;
            }
            temp = temp.next;
        }
        
        return min;
    }
    
    class Node {
        public int val;
        public Node next = null;
        public Node prev = null;
        
        public Node (int val) {
            this.val = val;
        }
        
        public Node getPrev() {
            return prev;
        }
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */