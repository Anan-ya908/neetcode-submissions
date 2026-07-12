class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <pair<int,int>> stack;vector<int> res(temperatures.size(), 0);
        int n=temperatures.size();
        if(n==1)
        return {0};
        else{
            for(int i=0;i<n;i++){
                int t=temperatures[i];
                while(!stack.empty()&&t>stack.top().first){
                 pair<int, int> p = stack.top(); 
                 res[p.second]=i-p.second ;
                 stack.pop();
                }
                stack.push({t,i});

            }


        }
        return res;
        
    }
};
