class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // int i=0;
        
        for(int j=1; j<nums.size(); j++){
            if(nums[j] == nums[j-1]){
                // i++;
                return true;
            }
        }
        return false;
        
    }
};