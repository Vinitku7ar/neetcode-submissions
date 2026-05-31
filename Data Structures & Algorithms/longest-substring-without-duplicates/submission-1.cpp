class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int l=0;
        unordered_set<char>charset;
        for(int i=0;i<s.size();i++){
             while(charset.find(s[i])!=charset.end()){
                charset.erase(s[l]);
                l++;
             }

              charset.insert(s[i]);
              count=max(count,i-l+1);
        }
        return count;
    }
};
