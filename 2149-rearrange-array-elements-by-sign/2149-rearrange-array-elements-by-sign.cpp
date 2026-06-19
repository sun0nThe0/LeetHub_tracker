class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vec1(nums.size(),0);
        int pos=0,neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                vec1[neg]=nums[i];
                neg+=2;
            }
            if(nums[i]>0){
                vec1[pos]=nums[i];
                pos+=2;
            }
            
        }
        return vec1;
    }
};