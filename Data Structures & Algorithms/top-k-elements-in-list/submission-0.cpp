class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;

        for(int i = 0 ;i < nums.size(); i++){
            if (map.count(nums[i])){
                map[nums[i]]++;
            }
            else{
                map.insert({nums[i], 1});
            }
        }
        vector<int> ans;

        for(int i = 0; i < k; i++){
            int maxFreq = 0;
            int maxElement = 0;

            for(auto it : map){
                if(it.second > maxFreq){
                    maxFreq = it.second;
                    maxElement = it.first;
                }
            }
            ans.push_back(maxElement);
            map.erase(maxElement);
        }

        return ans;
    }
};
