class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> lmax(n,0);
        vector<int> rmax(n,0);
 
        int water = 0;
        lmax[0] = height[0];
        rmax[n-1] = height[n-1];

        for (int j=1;j<n;j++) lmax[j] = max(lmax[j-1],height[j]);
        for (int j=n-2;j>=0;j--) rmax[j] = max(rmax[j+1],height[j]);
        
        for (int j=0;j<n;j++) water += min(lmax[j],rmax[j]) - height[j];
            
        
        return water;
    }
};
