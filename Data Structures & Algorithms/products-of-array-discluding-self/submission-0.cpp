class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>ans(nums.size(),1);
       int prefix=1;
       int suffix=1;
        for(int j=1;j<nums.size();j++){
            prefix*=nums[j-1];
            ans[j]=prefix;
        }
        
          for(int j=nums.size()-1;j>=0;j--){
 ans[j] *= suffix;
            suffix *= nums[j];

        }
       
       
       return ans;
    }
};
