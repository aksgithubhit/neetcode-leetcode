class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<vector<int>>ans;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
         ans.push_back({i.first,i.second});
        }
  sort(ans.begin(),ans.end(),[](vector<int>& a,vector<int>& b){
    return a[1]>b[1];
  });
  vector<int>v;
  for(int i=0;i<k;i++){
    v.push_back(ans[i][0]);
  }
return v;
  
    }
};
