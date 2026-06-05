class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x=nums.size();
        vector<int> answer(x);
        vector<int> prefix(x);
        vector<int> suffix(x);        
        prefix[0]=1;
        suffix[x-1]=1;
        for(int i=1;i<x;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int j=x-2;j>=0;j--){
            suffix[j]=suffix[j+1]*nums[j+1];
        }
        for(int i=0;i<x;i++){
            answer[i]=prefix[i]*suffix[i];
        } 
        return answer;       
    }
};