class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        map<int,int>freq;
        for(auto &i:nums){
            freq[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto &el : freq){
            pq.push({el.second,el.first});
        }
        while(k > 0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
        
    }
};