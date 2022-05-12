class Solution {
public:
    string simplifyPath(string path) {
        vector<string> s;
        string temp = "";
        int i = 0;
        
        while (i <= path.length()) {
            if (path[i] != '/' && i != path.length()) temp += path[i];
            else {
                if (temp == "..") {
                    if (s.size()) s.pop_back();
                }
                else if (temp == "." || !temp.length());
                else s.push_back(temp);
                
                temp = "";
            }
            i += 1;
        }
        if (!s.size()) return "/";
        string rs = "";
        for (int i=0; i<s.size(); ++i)
            rs += "/" + s[i];
        return rs;
    }
};