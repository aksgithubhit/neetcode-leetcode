class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
                set<vector<int>> st;

      for(int k=0;k<nums.size();k++){
       int i=k+1;
        int j=nums.size()-1;
        while(i<j){
           int sum=nums[i]+nums[j]+nums[k];
           if(sum==0){
             st.insert({nums[i],nums[j],nums[k]});
             i++;
             j--;
           }
           else if(sum<0) i++;
           else j--;
        }
      }
        return vector<vector<int>>(st.begin(), st.end());

    }
};
