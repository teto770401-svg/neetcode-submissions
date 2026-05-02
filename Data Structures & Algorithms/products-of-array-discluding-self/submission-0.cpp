class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int zeroCnt = 0;
        int zeroIdx = 0;
        int productExceptZero = 1;


        // for
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0){
                zeroCnt += 1;
                zeroIdx = i;
            }
            else{
                productExceptZero *= nums[i];
            }
        }

        if(zeroCnt == 1){
            ans[zeroIdx] = productExceptZero;
           }
        else if(zeroCnt == 0){
            for(int i = 0; i < nums.size(); ++i){
                ans[i] = productExceptZero / nums[i];
            }
        }
        return ans;
    }
};
