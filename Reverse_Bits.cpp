class Solution {
  public:
    long long reversedBits(long long x) {
        long long rev =0;
        for(int i=0;i<=31;i++){
            long long bit = x&1;
            rev = rev << 1;
            rev = rev|bit;
            x=x>>1;
        }
        return rev;
    }
};
