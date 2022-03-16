class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int> stack;
        int j = 0;
        
        for (int i=0; i<pushed.size(); i++) {
            while (j < popped.size() && stack.size() != 0 && popped.at(j) == stack.back()) {
                j += 1;
                stack.pop_back();
            }
            stack.push_back(pushed.at(i));   
        }
        
        for (; j<popped.size(); j++) {
            if (popped.at(j) != stack.back())
                return false;
            else
                stack.pop_back();
        }
        
        return true;
    }
};