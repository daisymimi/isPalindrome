//https://leetcode.com/problems/palindrome-number/submissions/875663031/
class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        bool flag=true;
        int i,j;
        if(str[0]=='-')
            return false;
        for(i=0,j=str.length()-1;
        i<=str.length()/2;
        i++,j--)
        {
            if(str[i]!=str[j])
            {
                flag=false;
            }
        }
        return flag;
    }
};
