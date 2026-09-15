class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counter=0;
        for(int vals:nums){
            int  num=vals;
            int digits=0;
            while(num>0){
                num=num/10;
                digits++;
            }
            if(digits%2==0){
                counter++;
            }
        }
        return counter;

        
    }
};