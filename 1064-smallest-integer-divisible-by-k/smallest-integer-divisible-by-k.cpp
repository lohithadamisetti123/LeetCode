class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0)return -1;
        for(int i=1;i<=k;i++){
            long n=(n*10+1)%k;
            if(n==0)return i;
        }
        return -1;
    }
};