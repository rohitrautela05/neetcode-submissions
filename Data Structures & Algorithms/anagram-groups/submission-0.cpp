class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>>m;
        for (string &s:str){
            vector<int> freq(26,0);

            for (char c:s){
                freq[c-'a']++;
            }
            string key;
            for(int x:freq){
                key+="*" + to_string(x);
            }
            m[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto &it:m)
            ans.push_back(it.second);

        return ans;

    }
};
