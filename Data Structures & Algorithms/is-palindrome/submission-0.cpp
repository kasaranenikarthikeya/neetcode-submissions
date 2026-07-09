class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for(auto i : s){
            if(isalnum(i))
                s1 += tolower(i);
        }
        int n = s1.size();
        int  i = 0;
        int  j = n-1;
        while(i < j){
            if(s1[i] != s1[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
