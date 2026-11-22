class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int maxi=INT_MIN;
        for(int i=0;i<k;i++){
           maxi=max(maxi,nums[i]);
        }
        ans.push_back(maxi);
     // trace the remaining window        
        for(int i=k;i<nums.size();i++){
            // add 
            
            if(nums[i-k]==maxi){
            maxi=INT_MIN;
              for (int j = i - k + 1; j <= i; j++) {
                    maxi = max(maxi, nums[j]);
                }
         }
            else {
                // The old maximum is still inside the window.
                maxi = max(maxi, nums[i]);
            }
              ans.push_back(maxi);

        }
        return ans;
    }
};
