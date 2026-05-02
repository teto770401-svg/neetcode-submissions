class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map <int, bool> mpp;
        for(auto e : nums){
            mpp[e] = 1;
        }
        //o(n)

        int ans = 0;
        
        for(auto e : nums){
            if(mpp.count(e-1) == 0){
                int tmpmax = 1;
                for(int i = 1; mpp.find(e+i) != mpp.end(); ++i){
                    tmpmax +=1;
                }
                ans = max(ans, tmpmax);
            }
        }

        return ans;
    }
};
