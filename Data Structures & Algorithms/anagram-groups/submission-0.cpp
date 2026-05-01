class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sort hash length = k, n/ O(n*klogk)
        unordered_map<string, vector<string>> mpp;
        vector<string> s = strs;
        for(int i = 0; i < s.size(); ++i){
            sort(s[i].begin(),s[i].end());
            mpp[s[i]].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto p : mpp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
