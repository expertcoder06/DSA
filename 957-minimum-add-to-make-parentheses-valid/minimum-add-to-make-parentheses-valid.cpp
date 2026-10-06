class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int result = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                open++;
            }else{
                if(open == 0){
                    result++;
                }
                open = max(open - 1, 0);
            }
        }
        return result+open;
    }
};