class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        size_t m = 0;
        unordered_set<int> set;
        for(int i = 0; i < s.size(); i++){
            if(set.count(s[i])){
                while(set.count(s[i])){
                    set.erase(s[left++]);
                }
                set.insert(s[i]);
            }
            else{
                set.insert(s[i]);
            }
            m = max(m,set.size());
        }
        return m;
    }
};
