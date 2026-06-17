class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxArea=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int mini=min(heights[i],heights[j]);
                int area=mini*(j-i);
                maxArea=max(area,maxArea);
            }
        }
        return maxArea;
    }
};
