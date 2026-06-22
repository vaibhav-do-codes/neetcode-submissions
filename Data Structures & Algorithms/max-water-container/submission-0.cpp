class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int container = 0;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                int width = j-i;
                int h = min(heights[i],heights[j]);
                int area = width*h;
                container = max(area, container);
            }
        }
        return container;
        
    }
};
