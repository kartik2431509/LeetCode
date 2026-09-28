class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int x : nums){
            freq[x]++;
        }
        vector<int> ans;
        while(k--){
            int maxfreq = 0;
            int element = 0;
            for(auto it : freq){
                if(it.second > maxfreq){
                    maxfreq = it.second;
                    element = it.first;
                }
            }
            ans.push_back(element);
            freq.erase(element);
        }
        
        return ans;
    }
};