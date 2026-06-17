class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int h=heights.size()-1;
        int res=0;
        while(l<h){
            int mini=min(heights[l],heights[h]);
            int area=mini*(h-l);
            res=max(area,res);
            if(heights[l]<heights[h]) l++;
            else if(heights[l]>heights[h])h--;
            else l++,h--;
        }
        return res;
        
    }
};
