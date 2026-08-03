class Solution {
public:
    bool isAnagram(string s, string t) {
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
