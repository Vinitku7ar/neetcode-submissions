class Solution {
public:
    bool isAnagram(string s, string t) {

         if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char,int>counts;
        unordered_map<char,int>countt;
        for(char ch: s){
            counts[ch]++;
        }
        for(char ch: t){
            countt[ch]++;
        }
        if(counts==countt) return true;

        return false;
       
    }
};
