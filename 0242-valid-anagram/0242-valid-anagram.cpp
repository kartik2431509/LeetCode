class Solution {
public:
    bool isAnagram(string s, string t) {
        // BRUTE force
        // if(s.length() != t.length()) return false;
        // for(int i=0; i<s.length(); i++){
        //     bool found = false;
        //     for(int j=0; j<t.length(); j++){
        //         if(s[i] == t[j])
        //         t.erase(j, 1);
        //         found = true;
        //         break;
        //     }
        //     if(!found) return false;
        // }
        // return true;

        // optimal 
        if(s.length() != t.length()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return t == s;
    }
};