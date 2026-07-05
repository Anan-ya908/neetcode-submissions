class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int w,m=0;
        int n=heights.size();
        int r=n-1;
        while(l<r){
            w=(r-l)*min(heights[l],heights[r]);
            m=max(w,m);
            w=0;
            if(heights[l]<=heights[r])
            l++;
            else
            r--;
        }
        return m;
    }
};
