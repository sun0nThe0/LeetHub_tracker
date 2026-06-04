class Solution {
public:
    int maxArea(vector<int>& height) {
        int rp=(height.size()-1),lp=0;
        int maxwt=INT_MIN;
        while(lp<rp){
            int width=rp-lp;
            int ht=min(height[rp],height[lp]);
            int currwt=width*ht;
            maxwt=max(maxwt,currwt);
            height[lp]>height[rp]?rp--:lp++;        
        }    
        return maxwt;
    }
};