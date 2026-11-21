class Solution {
public:
int rev(int x){
     int y=0;
        int i=0;
        while(x){
           int digit=x%10;
            if (y > INT_MAX / 10 || 
                (y == INT_MAX / 10 && digit > 7)) {
                return 0;
            }

            if (y < INT_MIN / 10 || 
                (y == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
           y=y*10+digit;
           x=x/10;
        }
        return y;
}
    int reverse(int x) {
        
        if(x>0){
       return rev(x);
        
        } else if(x<0)
        {
            int newv=abs(x);
        int ans= rev(newv);
        return -ans;
        }
       return 0; 
    }
};
