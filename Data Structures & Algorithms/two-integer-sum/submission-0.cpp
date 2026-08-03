class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        unordered_map<int, int> m;
        for (int i=0;i<v.size();i++){
            int x=target-v[i];
            if(m.find(x)!=m.end()){
                return{m[x],i};
            }
            m[v[i]] = i;
        }
        return {};
    }
};
