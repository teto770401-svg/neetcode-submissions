class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        vector<int> v(2001);// nums[i] + 1000

        for(auto e : nums){
            ++v[e+1000];
        }   

        
        for(int i = 0; i < k; ++i){
            int maxCount = 0;
            int maxIndex;
            for(int j = 0; j < v.size(); ++j){
                if(v[j] > maxCount){
                    maxCount = v[j];
                    maxIndex = j - 1000;
                }
            }
            v[maxIndex+1000] = 0;
            ans.push_back(maxIndex);
        }
    
        return ans;
    }
};
