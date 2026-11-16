class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0;
        int newarea=0;
        // sort(heights.begin(),heights.end());
        int i=0;
        int j=heights.size()-1;
        while(i<j){
            int width=j-i;
                 int height=min(heights[i],heights[j]);
                 area=width*height;
                 newarea=max(area,newarea);
                 if(heights[i]<heights[j]) i++;
                 else j--;
        }

        return newarea;
    }
};
