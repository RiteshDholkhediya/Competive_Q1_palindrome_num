class Solution {
public:
    bool isPalindrome(int x) {
       long temp,r=0;
        temp=x;
        if(temp>=0){
            while(temp){
                r = r*10 + temp%10;
                temp = temp/10;
            }
            if(x==r)
                return true;
            return false;
        }
        else 
            return false;
    }
};
