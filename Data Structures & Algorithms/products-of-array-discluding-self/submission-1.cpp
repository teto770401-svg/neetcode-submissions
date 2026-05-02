class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        
        int tmp = 1;
        for(int i = 0; i < nums.size(); ++i){
            ans[i] = tmp;
            tmp *= nums[i];
        }

        tmp = 1; 
        for(int i = 0; i < nums.size(); ++i){
            ans[nums.size() - i - 1] *= tmp;
            tmp *= nums[nums.size() - i - 1];
        }
        return ans;
    }
};
