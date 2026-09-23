class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0,rp=height.size()-1;
        while(lp<rp){
            int hegt=min(height[lp],height[rp]);
            int width=rp-lp;
            int currentwater=hegt*width;
            maxwater=max(maxwater,currentwater);

            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                 rp--;
            }
               

        }
        return maxwater;
        
    }
};