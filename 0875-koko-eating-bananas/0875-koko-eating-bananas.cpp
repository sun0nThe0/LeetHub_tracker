class Solution {
public:
    int findmax(vector<int> &vec){
        int maxi = INT_MIN;
        for(int i = 0; i < vec.size(); i++){
            maxi = max(maxi, vec[i]);
        }
        return maxi;
    }

    long long calculatetotalhours(vector<int> &vec, int mid){
        long long totalH = 0;
        for(int i = 0; i < vec.size(); i++){
            totalH += ceil((double)vec[i] / (double)mid);
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& vec, int h) {
        int low = 1, high = findmax(vec);

        while(low <= high){
            int mid = low + (high - low) / 2;
            long long totalH = calculatetotalhours(vec, mid);

            if(totalH <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};