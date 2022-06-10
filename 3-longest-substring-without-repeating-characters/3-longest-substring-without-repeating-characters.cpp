class Solution {
public:
    
        
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> mp;
        
        int n = s.length(), st = 0, end = 0, sol = 0;
        
        while(end < n){            
            mp[s[end]]++;            
            while(mp[s[end]] != 1){
                mp[s[st]]--;
                st++;
            }            
            sol = max(sol, end - st + 1);
            end++;                   
        }
        
        return sol;
        
    }
};