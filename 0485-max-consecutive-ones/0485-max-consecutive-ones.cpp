class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& vec) {
        int count=0,maxcount=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==1){
                count++;
                maxcount=max(maxcount,count);
            } 
            else{
                count=0;
            }
        }
        return maxcount;
        
    }
};