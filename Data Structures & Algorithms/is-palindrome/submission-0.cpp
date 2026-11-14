class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto c:s){
            if(isalnum(c)){
                if(c==' ') continue;
            str+=tolower(c);

            }
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        if(str==rev) return true;
        return false;

       
    }
};
