class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
         int i=1,j=piles.size()-1;
         long sum=0;
            while(i<j){
               sum+=piles[i];
               i=i+2;
               j--;
            }
        
        return sum;
    }
};