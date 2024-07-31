class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){ return false;}
        int original = x;
        double reversed = 0;
        
        while(x!=0){
            int rem = x%10;
            reversed  = reversed*10 + rem;
            x=x/10;
        }
        // 
        return reversed == original;
    }
};