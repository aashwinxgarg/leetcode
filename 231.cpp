class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        while(i<31){
            int ans=pow(2,i);
            if(n==ans){
                return true;
            }
            i++;
        }
        return false;
    }
};