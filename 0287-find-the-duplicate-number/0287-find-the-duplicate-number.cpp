class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int val:nums){
            mp[val]++;
            if( mp[val]>1){
                return val;
            }
                   
        }
        return -1;
        
    }
};