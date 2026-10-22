class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        for(auto asteroid:asteroids){
            bool alive=true;
            while(!st.empty() && asteroid<0 && st.top()>0){
                if(st.top()< -asteroid) st.pop();
                else if(st.top()==-asteroid){
                    st.pop();
                    alive=false;
                    break;
                }
                else{
                    alive=false;
                    break;
                }
            }
            if(alive) st.push(asteroid);  
        } 
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};