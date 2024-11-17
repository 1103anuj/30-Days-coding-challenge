class Solution {
public:
    string removeDuplicates(string s) {
        //initialise ans string as empty string
        string ans = "";
        int n = s.length();

        for(int i=0;i<n;i++){
            char currentCharacter = s[i];
            if(ans.empty()){
                //if ans empty , direct push krna h
                ans.push_back(currentCharacter);
            }
            //rightmost character of ans = ans.back()
            else if(currentCharacter == ans.back()) {
                ans.pop_back();
            }
            else if(currentCharacter != ans.back()){
                ans.push_back(currentCharacter);
            }
        }
        return ans;
    }
};