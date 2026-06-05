class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x=nums.size();
        vector<int> answer(x);
        vector<int> suffix(x);
        suffix[x-1]=1;
        answer[0]=1;
        for(int i=1;i<x;i++){
            answer[i]=answer[i-1]*nums[i-1];
        }
        for(int j=x-2;j>=0;j--){
            suffix[j]=suffix[j+1]*nums[j+1];
            answer[j]*=suffix[j];
        }
        return answer;       
    }
};