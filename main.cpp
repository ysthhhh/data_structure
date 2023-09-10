class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>un_map;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(un_map.find(target-nums[i])!=un_map.end()){
                res.push_back(i);
                res.push_back(un_map[target-nums[i]]);
            }
            un_map[nums[i]] = i;
        }
        return res;
    }
};
