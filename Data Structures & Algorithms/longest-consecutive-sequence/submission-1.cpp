#include <bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
    return 0;
        sort(nums.begin(), nums.end());
        int n=nums.size();int m=0,c=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1)
            c++;
            else if(nums[i]==nums[i-1])
            continue;
            else
            {
            m=max(m,c);c=0;}
            

        }
        m=max(m,c);
        return m+1;
    }
};
