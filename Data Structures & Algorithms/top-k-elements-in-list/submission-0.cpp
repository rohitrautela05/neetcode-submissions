class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        unordered_map<int,int>freq;
        for(int x:v){
            freq[x]++;
        }
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>>pq;

        for(auto &it:freq){
            pq.push({it.second,it.first});
            if(pq.size()>k)pq.pop();
        }
        vector<int> ans;
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;







    }
};
