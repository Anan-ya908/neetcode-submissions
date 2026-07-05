#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty())
            return 0;

        unordered_set<int> st;

        // Insert all elements into the hash set
        for (int x : nums)
            st.insert(x);

        int longest = 0;

        for (int x : st) {

            // Check if x is the start of a sequence
            if (st.find(x - 1) == st.end()) {

                int curr = x;
                int len = 1;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    len++;
                }

                longest = max(longest, len);
            }
        }

        return longest;
    }
};