class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            long long sum=0;
            while(n!=0){
                long long digits=n % 10;
                n=n/10;
                sum=sum + digits*digits;

            }
            n=sum;
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
           
        
    }
};