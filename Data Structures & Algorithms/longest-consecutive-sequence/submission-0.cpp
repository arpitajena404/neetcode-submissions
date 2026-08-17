class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) 
            return 0;
        sort(nums.begin(), nums.end());
        int k = nums[0];
        int c=1;
        int ans=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == k+1){
                c++;
                ans = max(ans,c);
            }
            else if(nums[i] == k){
                continue;
            }
            else{
                c = 1;
            }
            k= nums[i];
        }
        return ans;
    }
};
