class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        int largest = 1;
        if(nums.size()==0){
            return 0;
        }
        for(int x:nums){
            s.insert(x);
        }
        for(auto element : s){
            int parent = element-1;
            if(s.find(parent)==s.end()){
                //find entire band
                int next_no = element+1;
                int cnt = 1;
                while(s.find(next_no)!=s.end()){
                    next_no++;
                    cnt++;
                }
                if(cnt > largest){
                    largest = cnt;
                }
            }
        }

        return largest;
        
    }
};