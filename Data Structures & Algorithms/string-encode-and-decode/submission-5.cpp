class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto s:strs){
            ans+=s+" ";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i=0;i<s.length();i++){
            string temp="";
            while(i < s.length() && s[i]!=' '){
                temp=temp+s[i];
                i++;
            }
            ans.push_back(temp);
            // i++;
        }
        return ans;
    }
};
