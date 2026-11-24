class Solution {
public:
    vector<int> merge(vector<int>& nums1, vector<int>& nums2){
       vector<int>st;
      int i=0;
      int j=0;
      while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            st.push_back(nums1[i]);
            i++;
        }
        else{
            st.push_back(nums2[j]);
            j++;
        }
      }
      while(i<nums1.size()){
        st.push_back(nums1[i]);
        i++;
      }
      while(j<nums2.size()){
        st.push_back(nums2[j]);
        j++;
      }
      return st;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> st= merge(nums1,nums2);

      // find medium 
      // odd length
      int s = 0;
        int e = st.size() - 1;
      int mid=(s+e)/2;
      if(st.size()%2!=0) return (double)st[mid];
      else {
        int sum=st[mid]+st[mid+1];
        return (double)sum/2;
      }
      return 0;

    }
};
