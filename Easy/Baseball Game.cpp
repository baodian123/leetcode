class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> rs;
        int point = 0;
        
        for (int i=0; i<ops.size(); ++i) {
            if (ops[i] == "C") {
                rs.pop_back();
            } else if (ops[i] == "D") {
                rs.push_back(rs[rs.size()-1] * 2);
            } else if (ops[i] == "+") {
                rs.push_back(rs[rs.size()-1] + rs[rs.size()-2]);
            } else {
                rs.push_back(stoi(ops[i]));
            }
        }
        
        for (int i=0; i<rs.size(); ++i)
            point += rs[i];
        
        
        return point;
    }
};