class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            for (char c : s) {

            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                char expected;

                if (c == ')')
                    expected = '(';
                else if (c == '}')
                    expected = '{';
                else
                    expected = '[';

                if (st.empty() || st.top() != expected)
                    return false;

                st.pop();
            }
        }

        }
        return st.empty();        
        
    }
};
