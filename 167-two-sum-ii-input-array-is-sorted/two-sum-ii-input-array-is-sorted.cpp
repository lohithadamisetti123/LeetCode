class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int l=0,h=numbers.size()-1;
        while(l<=h){
          if(numbers[l]+numbers[h]==target){
            res.push_back(l+1);
            res.push_back(h+1);
            break;
          }
          else if(numbers[l]+numbers[h]>target){
            h--;
          }
          else{
            l++;
          }
        }
        return res;
    }
};