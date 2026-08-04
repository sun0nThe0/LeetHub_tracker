class Solution {
public:
    string largestOddNumber(string num) {
        char x='0';
        for(int i = num.size() - 1; i >= 0; i--) {
            if((num[i]-'0')%2==1){
                return num.substr(0, i + 1);
            }
        }
        if(x=='0') return "";
        return string(1,x);
        
    }
};