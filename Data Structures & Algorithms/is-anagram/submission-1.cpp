class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return 0;
        vector<int>freq(26,0);
        for(int x:s){
            x=x-'a';
            freq[x]++;
        }
        for(int x:t){
            x=x-'a';
            freq[x]--;
        }
        for(int x:freq){
            if(x!=0)return false;
        }
        return true;
        
    }
};
