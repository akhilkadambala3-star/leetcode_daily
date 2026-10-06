class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int vals:nums){
            mp[vals]++;
            if(mp[vals]==2){
                ans.push_back(vals);
            }
        }return ans;

        
    }
};