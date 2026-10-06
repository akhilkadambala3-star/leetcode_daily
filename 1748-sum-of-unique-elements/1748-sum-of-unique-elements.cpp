class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int vals:nums){
            mp[vals]++;
        }
        int sum=0;
        for(int vals:nums){
            if(mp[vals]==1){
                sum += vals;
            }
        }
        return sum;
    }
};