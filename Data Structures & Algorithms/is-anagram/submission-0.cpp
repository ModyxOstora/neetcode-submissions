class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length()!=t.length()) return false;
      unordered_map <int, int> m1,m2;
      for(auto c:s) {
        m1[c]++;
      }
      for(auto c:t){
        m2[c]++;
      }
      for(auto c:s){
        if(m1[c]!=m2[c]) return false;
      }
      return true;
    }
};
