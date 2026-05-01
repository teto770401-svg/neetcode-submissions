class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        string length;
        length.resize(strs.size()); 
        for(int i = 0; i < strs.size(); ++i){
            s.append(strs[i]);
            length[strs.size() - 1 - i] = static_cast<unsigned char>(strs[i].size());
        }
        s.append(length);
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        while(s.empty()==false){
            int len = static_cast<int>(static_cast<unsigned char>(s.back()));
            ans.push_back(s.substr(0, len));
            s.erase(0, len);
            s.pop_back();
        }
        return ans;
    }
};
