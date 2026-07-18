class Solution {
public:
    int findGCD(vector<int>& nums) {
        // int mn = *min_element(nums.begin(), nums.end());
        // int mx = *max_element(nums.begin(), nums.end());
        // return gcd(mn,mx);

        int mn = nums[0];
        int mx = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] < mn){
                mn = nums[i];
            }
            if(nums[i] > mx){
                mx = nums[i];
            }
        }
        while(mx != 0){
                int temp = mx;
                mx = mn % mx;
                mn = temp;
            }
        return mn;
    }
};