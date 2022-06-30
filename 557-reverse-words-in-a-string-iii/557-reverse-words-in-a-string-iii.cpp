class Solution {
public:
    string reverseWords(string s) {
        int front = 0;
        for(int end = 0; end <= s.size(); end++){
            if(end == s.size() || s[end] == ' '){
                reverse(&s[front], &s[end]);
                front = end + 1;
            }
        }
        return s;
    }
};