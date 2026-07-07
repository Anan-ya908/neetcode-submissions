class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if (n <= 2) return 0;
        int area=0;
        vector <int> left = {height[0]};
        vector <int> right(height.begin()+1,height.end());
        for(int i=1;i<n-1;i++){
            int maxl=0,maxr=0;
            left.push_back(height[i]);
            right.erase(right.begin());
            for(int j=0;j<left.size();j++){
                maxl=max(left[j],maxl);
            }
            for(int j=0;j<right.size();j++){
                maxr=max(right[j],maxr);
            }
            int water = min(maxl,maxr)-height[i];
            if (water > 0) area+=water;
        }
        return area;
    }
};