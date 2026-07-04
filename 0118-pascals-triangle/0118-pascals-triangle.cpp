class Solution {
public:
    vector<int> generateRow(int row){
        vector<int> ansrow;
        ansrow.push_back(1);

        long long ans = 1;

        for(int col = 1; col < row; col++){
            ans = ans * (row - col);
            ans = ans / col;
            ansrow.push_back(ans);
        }

        return ansrow;
    }

    vector<vector<int>> generate(int n){
        vector<vector<int>> vec;

        for(int i = 1; i <= n; i++){
            vec.push_back(generateRow(i));
        }

        return vec;
    }
};